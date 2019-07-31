//
//  MapiMessage.cpp
//  MsgInfo
//
//  Created by Steven Green on 30/07/2019.
//  Copyright © 2019 Greenius Limited. All rights reserved.
//

#include "MapiMessage.hpp"

/* Stuff to make mapidefs.h and mapitags.h work */
#if 0
typedef unsigned char BYTE;
typedef unsigned long ULONG;
typedef long LONG;
typedef ULONG* ULONG_PTR;
typedef unsigned short DWORD;
typedef void* LPVOID;
typedef long long LARGE_INTEGER;
typedef char* LPSTR;
typedef wchar_t WCHAR;
typedef ULONG SCODE;
#define STDMETHODCALLTYPE
#define STDAPICALLTYPE
#define interface class
typedef ULONG HRESULT;

// Dont know what these are, sp ojust set the to int to keep compiler happy
typedef int CY;
typedef int GUID;
typedef int IID;

typedef GUID* LPGUID;
typedef LPVOID IUnknown;
typedef LPVOID IMAPIAdviseSink;

#define FAR

#endif

#include "mapiExtraDefs.h"
#include "mapidefs.h"
#include "mapitags.h"
#include "pole.h"

#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

#ifndef Trace

class IosStateSaver {
public:
  explicit IosStateSaver(std::ostream& stream):
  _stream(stream),
  _oldState(nullptr)
  {
    _oldState.copyfmt(stream);
  }
  ~IosStateSaver() {
    _stream.copyfmt(_oldState);
  }

  IosStateSaver(const IosStateSaver &rhs) = delete;
  IosStateSaver(const IosStateSaver &&rhs) = delete;
  IosStateSaver& operator= (const IosStateSaver& rhs) = delete;

private:
  std::ostream& _stream;
  std::ios _oldState;
};

#define Trace(s) { IosStateSaver state(std::cout); std::cout << s << std::endl; }
#endif

namespace MapiMessage {

  inline unsigned short bytesToU16(const unsigned char* buffer)
  {
    return buffer[0] + (buffer[1] << 8);
  }

  inline unsigned long bytesToU32(const unsigned char* buffer)
  {
    return buffer[0] + (buffer[1] << 8) + (buffer[2] << 16) + (buffer[3] << 24);
  }

  inline std::uint64_t bytesToU64(const unsigned char* buffer)
  {
    uint64_t result = buffer[7];
    for(int b = 7; b-- > 0;)
    {
      result = (result << 8) + buffer[b];
    }
    return result;
  }

  inline float bytesToFloat32(const unsigned char* buffer)
  {
    const float* val = reinterpret_cast<const float*>(buffer);
    return *val;
  }

  inline double bytesToFloat64(const unsigned char* buffer)
  {
    const double* val = reinterpret_cast<const double*>(buffer);
    return *val;
  }

  inline bool bytesToBool(const unsigned char* buffer)
  {
    return buffer[0] != 0;
  }

  std::chrono::system_clock::time_point ptSystimeToSystemClock(std::uint64_t ptSysTime)
  {
    using namespace std;
    using namespace std::chrono;
    // 100ns intervals
    using filetime_duration =duration<int64_t, ratio<1, 10000000>>;
    // January 1, 1601 (NT epoch) - January 1, 1970 (Unix epoch):
    constexpr duration<int64_t> nt_to_unix_epoch{INT64_C(-11644473600)};

    const filetime_duration asDuration{static_cast<int64_t>(ptSysTime)};
    const auto withUnixEpoch = asDuration + nt_to_unix_epoch;
    return system_clock::time_point{
      duration_cast<system_clock::duration>(withUnixEpoch)};
  }

  class StreamReader
  {
  public:
    StreamReader(std::unique_ptr<POLE::Stream> stream) : m_stream(std::move(stream)) {}

    std::string fullName() const { return m_stream->fullName(); }
    size_t size() const { return m_stream->size(); }
    bool fail() const { return m_stream->fail(); }

    bool skip(size_t len)
    {
      m_stream->seek(m_stream->tell() + len);
      return !fail();
    }

    unsigned char readU8()
    {
      return m_stream->getch();
    }

    unsigned short readU16()
    {
      unsigned char u16[2];
      m_stream->read(u16, sizeof(u16));
      return bytesToU16(u16);
    }

    unsigned long readU32()
    {
      unsigned char u32[4];
      m_stream->read(u32, sizeof(u32));
      return bytesToU32(u32);
    }

    size_t read(void* buffer, size_t buflen)
    {
      return m_stream->read(reinterpret_cast<unsigned char*>(buffer), buflen);
    }

    size_t tell() const { return m_stream->tell(); }

  private:
    std::unique_ptr<POLE::Stream> m_stream;
  };



  static const std::string StreamName_Properties_Version = "__properties_version1.0";

  std::unique_ptr<Message> Message::createFromFile(const std::string& filename)
  {
    auto storage = std::make_shared<POLE::Storage>(filename);
    if(storage->open())
    {
      std::unique_ptr<Message> msg(new Message(std::move(storage)));
      msg->parse();
      return msg;
    }
    return 0;
  }


  Message::Message(std::shared_ptr<POLE::Storage> storage) :
  m_storage(storage)
  {
  }

  Message::~Message()
  {
    Trace("Destruct Message");
  }

  Message::HeaderMap Message::getHeaders() const
  {
    return m_headerMap;
  }


  void Message::parse()
  {
    // Get the top level properties information

    auto propStream = std::make_unique<POLE::Stream>(m_storage.get(), "/" + StreamName_Properties_Version);
    if(!propStream->fail())
    {
      StreamReader reader(std::move(propStream));

      unsigned long size = reader.size();
      Trace(reader.fullName() << ", " << size << " bytes");

      reader.skip(8);
      unsigned long nextRecipientID = reader.readU32();
      unsigned long nextAttachmentID = reader.readU32();
      unsigned long recipientCount = reader.readU32();
      unsigned long attachentCount = reader.readU32();
      reader.skip(8);

      Trace("Recipients=" << recipientCount);
      Trace("Attachments=" << attachentCount);
      Trace("Next Recipients=" << nextRecipientID);
      Trace("Next Attachments=" << nextAttachmentID);

      int nItems = (size - reader.tell()) / 16;
      for(int i = 0; (i < nItems) && !reader.fail(); ++i)
      {
        Trace("Item: " << i);
        unsigned char itemBytes[16];
        reader.read(itemBytes, sizeof(itemBytes));

//        unsigned short propType = bytesToU16(itemBytes);
//        unsigned short propTag = bytesToU16(itemBytes + 2);
        unsigned long propTag = bytesToU32(itemBytes);
        unsigned long flags = bytesToU32(itemBytes+4);

        // The other 8 bytes depend on the type...
        unsigned short propType = PROP_TYPE(propTag);
        unsigned short propID = PROP_ID(propTag);


        std::ostringstream hexbuf;
        hexbuf << "0x";
        for(int b = 8; b < 16; ++b)
        {
          hexbuf << std::setfill('0') << std::hex << std::setw(2) << (unsigned int) itemBytes[b];
        }
        Trace("proptype=0x" << std::setfill('0') << std::hex << std::setw(4) << (unsigned int) propType
        << ", proptag=0x" << std::setfill('0') << std::hex << std::setw(4) << (unsigned int) propID
        << ", flags=0x" << std::setfill('0') << std::hex << std::setw(8) << flags
        << ", Data=" << hexbuf.str());

        if(flags & PROPATTR_READABLE)
        {
          // Process....

          switch(propType)
          {
            case PT_SHORT:
            {
              unsigned short v = bytesToU16(itemBytes + 8);
              Trace("I2: " << (unsigned int) v);
              break;
            }
            case PT_LONG:
            {
              unsigned long v = bytesToU32(itemBytes + 8);
              Trace("I4: " << v);
              break;
            }
            case PT_FLOAT:
            {
              float v = bytesToFloat32(itemBytes + 8);
              Trace("R4: " << v);
              break;
            }
            case PT_DOUBLE:
            {
              double v = bytesToFloat64(itemBytes + 8);
              Trace("R4: " << v);
              break;
            }
            case PT_BOOLEAN:
            {
              bool v = bytesToBool(itemBytes + 8);
              Trace("Bool: " << v);
              break;
            }
            case PT_UNICODE:
            {
              // TODO... Variable UTF16
              Trace("UNICODE... TODO, size=" << bytesToU32(itemBytes + 8));
              break;
            }
            case PT_STRING8:
            {
              // TODO... Variable UTF8
              Trace("STRING8... TODO, size=" << bytesToU32(itemBytes + 8));
              break;
            }
            case PT_SYSTIME:
            {
              /* 8 bytes; a 64-bit integer representing the number of
               * 100-nanosecond intervals since January 1, 1601
               */
              uint64_t v = bytesToU64(itemBytes + 8);
              auto date = ptSystimeToSystemClock(v);
              time_t t = std::chrono::system_clock::to_time_t(date);
              auto dateStr = std::put_time(std::localtime(&t), "%F %T");
              Trace("SYSTIME: " << dateStr);
              break;
            }
            case PT_BINARY:
            {
              Trace("BINARY... TODO, size=" << bytesToU32(itemBytes + 8));
              break;
            }
            default:
            {
              Trace("Unknown property type " << propType);
              break;
            }
          }


        }

      }

    }
  }
}
