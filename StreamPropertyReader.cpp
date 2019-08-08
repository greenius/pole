//
//  StreamPropertyReader.cpp
//  mapimessage
//
//  Created by Steven Green on 08/08/2019.
//  Copyright © 2019 CHLSoftware. All rights reserved.
//

#include "StreamPropertyReader.hpp"
#include "mapiExtraDefs.h"
#include "mapidefs.h"
#include "mapiUtils.hpp"
#include "StreamReader.hpp"

#include <codecvt>
#include <iostream>
#include <iomanip>


namespace MapiMessage {

#pragma StreamPropertyReader

  StreamPropertyReader::StreamPropertyReader(const std::shared_ptr<POLE::Storage>& store, const std::string& path) :
  m_store(store),
  m_path(path)
  {
    readHeaders();
  }

  const StreamPropertyReader::PropEntry* StreamPropertyReader::find(uint16_t propid) const
  {
    for(const PropEntry& item: m_entries)
    {
      if(item.propID == propid)
      {
        return &item;
      }
    }
    return nullptr;
  }

  std::string StreamPropertyReader::getPropertyString(uint16_t propid) const
  {
    const PropEntry* item = find(propid);
    if(item && item->readable)
    {
      switch(item->propType)
      {
        case PT_SHORT:
        {
          unsigned short v = bytesToU16(item->bytes);
          // Trace(tagName << "=" << (unsigned int) v << " (I2)");
          return std::to_string(v);
        }
        case PT_LONG:
        {
          unsigned long v = bytesToU32(item->bytes);
          // Trace(tagName << "=" << v << " (I4)");
          return std::to_string(v);
        }
        case PT_FLOAT:
        {
          float v = bytesToFloat32(item->bytes);
          // Trace(tagName << "="<< v << "(R4)");
          return std::to_string(v);
        }
        case PT_DOUBLE:
        {
          double v = bytesToFloat64(item->bytes);
          // Trace(tagName << "=" << v << " (R4)");
          return std::to_string(v);
        }
        case PT_BOOLEAN:
        {
          bool v = bytesToBool(item->bytes);
          // Trace(tagName << "=" << (v ? "true" : "false") << " (Bool)");
          return v ? "true" : "false";
        }
        case PT_SYSTIME:
        {
          /* 8 bytes; a 64-bit integer representing the number of
           * 100-nanosecond intervals since January 1, 1601
           */
          uint64_t v = bytesToU64(item->bytes);
          auto date = ptSystimeToSystemClock(v);
          time_t t = std::chrono::system_clock::to_time_t(date);
          // auto dateStr = std::put_time(std::localtime(&t), "%F %T");
          // Trace(tagName << "=" << dateStr << " (SYSTIME)");
          // break;
          std::ostringstream dateStr;
          // dateStr << std::put_time(std::gmtime(&t), "%FT%T%z"); // ISO8601
          dateStr << std::put_time(std::gmtime(&t), "%c");
          return dateStr.str();
        }
        case PT_BINARY:
        {
          // Trace("BINARY... TODO, size=" << bytesToU32(item->ytes + 8));
          uint32_t propTag = PROP_TAG(item->propType, item->propID);
          std::vector<uint8_t> v = getBinaryData(propTag, bytesToU32(item->bytes));
          // Trace(tagName << "=" << "BINARY: " << v.size() << " bytes\n" << hexdump(v));
          // break;
          return hexdump(v);
        }
        case PT_UNICODE:
        {
          // Variable UTF16
          // Note the length is +2 for null termination
          std::u16string v16 = getString16(PROP_TAG(item->propType, item->propID), bytesToU32(item->bytes));
          std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> stringConverter;
          std::string v8 = stringConverter.to_bytes(v16);
          // Trace(tagName << "=\"" << v8 << "\" (UNICODE16)");
          return v8;
        }
        case PT_STRING8:
        {
          // Variable UTF8
          // Note the length is +1 for null termination
          std::string v = getString8(PROP_TAG(item->propType, item->propID), bytesToU32(item->bytes));
          // Trace(tagName << "=\"" << v << "\" (STRING8)");
          // break;
          return v;
        }
        default:
        {
          // Trace(tagName << "=" << "Unknown property type " << propType);
          // break;
          return {};
        }
      }
    } // switch(propType)
    return {};
  }

  uint32_t StreamPropertyReader::getPropertyInt(uint16_t propid) const
  {
    const PropEntry* item = find(propid);
    if(item && item->readable)
    {
      switch(item->propType)
      {
        case PT_SHORT:
        {
          unsigned short v = bytesToU16(item->bytes);
          return v;
        }
        case PT_LONG:
        {
          unsigned long v = bytesToU32(item->bytes);
          return v;
        }
        case PT_BOOLEAN:
        {
          bool v = bytesToBool(item->bytes);
          return v;
        }
        case PT_FLOAT:
        case PT_DOUBLE:
        case PT_SYSTIME:
        case PT_BINARY:
        case PT_UNICODE:
        case PT_STRING8:
        default:
        {
          break;
        }
      }
    }
    return {};
  }

  bool StreamPropertyReader::hasProperty(uint16_t propid) const
  {
    return find(propid);
  }

  void StreamPropertyReader::readHeaders()
  {
    // StreamReader reader(m_store->openStream(m_path + StreamName_Properties_Version));
    StreamReader reader(m_store, m_path + "/" + StreamName_Properties_Version);

    // Skip the header
    size_t headerSize = m_path.empty() ? 32 : 8;
    reader.skip(headerSize);

    int nItems = reader.size() - headerSize;
    m_entries.resize(nItems);
    for(int i = 0; (i < nItems) && !reader.fail(); ++i)
    {
      PropEntry& entry = m_entries[i];

      // Trace("Item: " << i);
      unsigned char itemBytes[16];
      reader.read(itemBytes, sizeof(itemBytes));

      unsigned long propTag = bytesToU32(itemBytes);
      unsigned long flags = bytesToU32(itemBytes+4);

      // The other 8 bytes depend on the type...
      entry.propType = PROP_TYPE(propTag);
      entry.propID = PROP_ID(propTag);
      entry.readable = flags & PROPATTR_READABLE;
      memcpy(entry.bytes, itemBytes+8, 8);
    }
  }

  std::vector<uint8_t> StreamPropertyReader::getBinaryData(uint32_t proptag, size_t length) const
  {
    std::ostringstream streamName;
    streamName << m_path;
    if(m_path.empty() || (m_path.back() != '/'))
    {
      streamName << "/";
    }
    streamName << StreamName_PropertyData
    << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << proptag;

    // auto stream = openStream(streamName.str());
    StreamReader stream(m_store, streamName.str());

    std::vector<uint8_t> result(length);
    auto count = stream.read(result.data(), length);
    if(count != length)
    {
      std::ostringstream msg;
      msg << "Error reading from stream " << streamName.str() << ", wanted=" << length << ", result=" << count;
      throw std::runtime_error(msg.str());
    }
    return result;
  }

  /* Note length is +1 for null */
  std::string StreamPropertyReader::getString8(uint32_t proptag, size_t length) const
  {
    auto bytes = getBinaryData(proptag, length-1);
    const char* chars = reinterpret_cast<const char*>(bytes.data());
    return std::string(chars, bytes.size());
  }

  /* Note lenth is +2 for null */
  std::u16string StreamPropertyReader::getString16(uint32_t proptag, size_t length) const
  {
    auto bytes = getBinaryData(proptag, length-2);
    // Assume correct endian
    const char16_t* chars = reinterpret_cast<char16_t*>(bytes.data());
    return std::u16string(chars, bytes.size() / sizeof(char16_t));
  }




}

