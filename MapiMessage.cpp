//
//  MapiMessage.cpp
//  MsgInfo
//
//  Created by Steven Green on 30/07/2019.
//  Copyright © 2019 Greenius Limited. All rights reserved.
//

#include "MapiMessage.hpp"

#include "mapiExtraDefs.h"
#include "mapidefs.h"
#include "mapitags.h"
#include "mapitagnames.h"
#include "ms-oxprops.h"
#include "pole.h"

#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>
#include <codecvt>


namespace {

#pragma mark Debugging

#ifndef Trace

#define Trace(s) {}

#else

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

#pragma mark Utility functions

  std::string convert_utf16Toutf8(const std::u16string& src)
  {
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> stringConverter;
    return stringConverter.to_bytes(src);
  }

  std::string hexdump(const std::vector<uint8_t> data)
  {
    const int lineWidth = 16;
    int index = 0;

    std::ostringstream hexbuf;
    // hexbuf << std::setfill('0') << std::hex << std::setw(2);
    for(auto b: data)
    {
      if((index %lineWidth) == 0)
      {
        if(index != 0)
        {
          hexbuf << "\n";
        }
      }
      else
      {
        hexbuf << " ";
      }
      hexbuf << std::setfill('0') << std::hex << std::setw(2) << (unsigned int) b;
      ++index;
    }
    return hexbuf.str();
  }

} // local namespace


namespace MapiMessage {

#pragma mark Constants

  static const std::string StreamName_Properties_Version{"__properties_version1.0"};
  static const std::string StreamName_PropertyData{"__substg1.0_"};
  static const std::string StreamName_NamedProperties{"__nameid_version1.0"};
  static const std::string StreamName_Recipient{"__recip_version1.0"};
  static const std::string StreamName_Attachment{"__attach_version1.0"};

#pragma mark MapMessage non member functioms

  inline uint16_t bytesToU16(const unsigned char* buffer)
  {
    return buffer[0] + (buffer[1] << 8);
  }

  inline uint32_t bytesToU32(const unsigned char* buffer)
  {
#if 0
    unsigned long result = buffer[3];
    for(int i = 2; i-- > 0;)
    {
      unsigned char b = buffer[i];
      result <<= 8;
      result += b;
    }
    return result;
#else
    // Not reliable when top bit is set and unsigned long is 64 bits
    // Fine if use uint32_t
    return buffer[0] + (buffer[1] << 8) + (buffer[2] << 16) + (buffer[3] << 24);
#endif
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

#pragma mark StreamReader

  class StreamReader
  {
  public:
    StreamReader(std::unique_ptr<POLE::Stream> stream) : m_stream(std::move(stream)) {}
    StreamReader(const std::shared_ptr<POLE::Storage>& store, const std::string& path)
    {
      auto stream = std::make_unique<POLE::Stream>(store.get(), path);
      if(stream->fail())
      {
        throw std::runtime_error("Failed to open stream " + path);
      }
      m_stream = std::move(stream);
    }

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
    void seek(size_t pos) { m_stream->seek(pos); }

    std::string readString8(size_t length)
    {
      std::vector<uint8_t> bytes(length);
      auto count = read(bytes.data(), length);
      if(count != length)
      {
        std::ostringstream msg;
        msg << "Error reading from stream " << m_stream->fullName() << ", wanted=" << length << ", result=" << count;
        throw std::runtime_error(msg.str());
      }
      const char* chars = reinterpret_cast<const char*>(bytes.data());
      return std::string(chars, bytes.size());
    }

    std::u16string readString16(size_t length)
    {
      std::vector<uint8_t> bytes(length);
      auto count = read(bytes.data(), length);
      if(count != length)
      {
        std::ostringstream msg;
        msg << "Error reading from stream " << m_stream->fullName() << ", wanted=" << length << ", result=" << count;
        throw std::runtime_error(msg.str());
      }
      const char16_t* chars = reinterpret_cast<const char16_t*>(bytes.data());
      return std::u16string(chars, bytes.size() / sizeof(char16_t));
    }

  private:
    std::unique_ptr<POLE::Stream> m_stream;
  };

#pragma StreamPropertyReader

  class StreamPropertyReader
  {
    struct PropEntry {
      uint16_t propID;
      uint16_t propType;
      bool readable;
      uint8_t bytes[8];
    };

  public:
    StreamPropertyReader(const std::shared_ptr<POLE::Storage>& store, const std::string& path = std::string());

    std::string getPropertyString(uint16_t propid) const;
    bool hasPropertyString(uint16_t propid) const;

  private:
    void readHeaders();
    std::vector<uint8_t> getBinaryData(uint32_t proptag, size_t length) const;
    std::string getString8(uint32_t proptag, size_t length) const;
    std::u16string getString16(uint32_t proptag, size_t length) const;

    std::string m_path;
    std::shared_ptr<POLE::Storage> m_store;
    /* Just keep a vector... we'll have to iterate to find propid. If it is a performance problem then replace with a map or multimap */
    std::vector<PropEntry> m_entries;
  };

  StreamPropertyReader::StreamPropertyReader(const std::shared_ptr<POLE::Storage>& store, const std::string& path) :
  m_store(store),
  m_path(path)
  {
    readHeaders();
  }


  std::string StreamPropertyReader::getPropertyString(uint16_t propid) const
  {
    for(auto item: m_entries)
    {
      if(item.propID == propid)
      {
        if(item.readable)
        {
          switch(item.propType)
          {
            case PT_SHORT:
            {
              unsigned short v = bytesToU16(item.bytes);
              // Trace(tagName << "=" << (unsigned int) v << " (I2)");
              return std::to_string(v);
            }
            case PT_LONG:
            {
              unsigned long v = bytesToU32(item.bytes);
              // Trace(tagName << "=" << v << " (I4)");
              return std::to_string(v);
            }
            case PT_FLOAT:
            {
              float v = bytesToFloat32(item.bytes);
              // Trace(tagName << "="<< v << "(R4)");
              return std::to_string(v);
            }
            case PT_DOUBLE:
            {
              double v = bytesToFloat64(item.bytes);
              // Trace(tagName << "=" << v << " (R4)");
              return std::to_string(v);
            }
            case PT_BOOLEAN:
            {
              bool v = bytesToBool(item.bytes);
              // Trace(tagName << "=" << (v ? "true" : "false") << " (Bool)");
              return v ? "true" : "false";
            }
            case PT_SYSTIME:
            {
              /* 8 bytes; a 64-bit integer representing the number of
               * 100-nanosecond intervals since January 1, 1601
               */
              uint64_t v = bytesToU64(item.bytes);
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
              // Trace("BINARY... TODO, size=" << bytesToU32(itemBytes + 8));
              uint32_t propTag = PROP_TAG(item.propType, item.propID);
              std::vector<uint8_t> v = getBinaryData(propTag, bytesToU32(item.bytes));
              // Trace(tagName << "=" << "BINARY: " << v.size() << " bytes\n" << hexdump(v));
              // break;
              return hexdump(v);
            }
            case PT_UNICODE:
            {
              // Variable UTF16
              // Note the length is +2 for null termination
              std::u16string v16 = getString16(PROP_TAG(item.propType, item.propID), bytesToU32(item.bytes));
              std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> stringConverter;
              std::string v8 = stringConverter.to_bytes(v16);
              // Trace(tagName << "=\"" << v8 << "\" (UNICODE16)");
              return v8;
            }
            case PT_STRING8:
            {
              // Variable UTF8
              // Note the length is +1 for null termination
              std::string v = getString8(PROP_TAG(item.propType, item.propID), bytesToU32(item.bytes));
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
      }
    }
    return {};
  }

  bool StreamPropertyReader::hasPropertyString(uint16_t propid) const
  {
    for(auto item: m_entries)
    {
      if(item.propID == propid)
      {
        return true;
      }
    }
    return false;
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



#pragma mark Message class implementation

  std::unique_ptr<Message> Message::createFromFile(const std::string& filename)
  {
    auto storage = std::make_shared<POLE::Storage>(filename);
    if(storage->open())
    {
      std::unique_ptr<Message> msg(new Message(std::move(storage)));
      // msg->parse();
      return msg;
    }
    return 0;
  }


  Message::Message(std::shared_ptr<POLE::Storage> storage) :
  m_storage(storage),
  m_namedProperties(),
#ifdef INCLUDE_DIAGNOSTICS
  m_recipients(),
  m_attachments(),
#endif
  // m_headerMap(),
  m_recipientCount(0),
  m_attachmentCount(0)
  {
  }

  Message::~Message()
  {
    // Trace("Destruct Message");
  }

  Message::HeaderMap Message::getHeaders()
  {

    // Simple properties that map directly...
    HeaderMap result;

    parseNamedProperties();
    parseRootHeader();

    // Root properties....
    StreamPropertyReader propReader(m_storage);


    // Start off by getting any transmitted headers
    std::string transmittedHeaders = propReader.getPropertyString(PROP_ID(PR_TRANSPORT_MESSAGE_HEADERS));
    // Parse transmitted headers... (also see how we handle .eml)
    // Needs to handle multi line and different encodings

    // Simple mapped properties

    std::unordered_map<uint16_t, std::string> propertyMap{
      { PROP_ID(PR_SUBJECT), "Subject" },
      { PROP_ID(PR_CLIENT_SUBMIT_TIME), "Date" },
      { PROP_ID(PR_INTERNET_MESSAGE_ID), "Message-Id" }
    };

    for(auto prop: propertyMap)
    {
      auto value = propReader.getPropertyString(prop.first);
      if(!value.empty())
      {
        result.emplace(prop.second, value);
      }
    }

#if 0
    // This is not as simple as mapping the Mapi Property to an SMTP one
    // eg. The display name and email address are seperate properties
    // X-* properties may be named properties

    // Maybe let the parser collect properties we might be interested in

    // Then splice them together when complete
    // Or just set up a different set of properties and add to the Metatag defs

    // Or set up a callback mechanism during parse...
    // interface to: getTagID, getTagName, isNamedProperty, getValueString()

    m_requiredProperties = {
      { PROP_ID(PR_SUBJECT), "Subject" },
      { PROP_ID(PR_CONVERSATION_TOPIC), "Subject" },

      // Need to combine as "DisplayName <emailAddress>"
      { PROP_ID(PR_SENT_REPRESENTING_NAME), "From-name" }, // Display name
      { PROP_ID(PR_SENDER_NAME), "From-name" },
      { PROP_ID(PR_SENDER_EMAIL_ADDRESS), "From-email" }, // Email address

      // If there are multiple To/CC/BCC then they get combined as:
      // Name1 <email1>, name2 <email2>, name3 <email3>
      { PROP_ID(PR_DISPLAY_TO), "To" },
      { PROP_ID(PR_DISPLAY_CC), "Cc" },
      { PROP_ID(PR_DISPLAY_BCC), "Bcc" },

      { PROP_ID(PR_DISPLAY_NAME), "To" }, // In a recipient stream
      { PROP_ID(PR_EMAIL_ADDRESS), "To" }, // In a recipient stream

      { PROP_ID(PR_RECEIVED_BY_NAME), "Delivered-To-name" },
      { PROP_ID(PR_RCVD_REPRESENTING_NAME), "Delivered-To-name" },
      { PROP_ID(PR_RECEIVED_BY_EMAIL_ADDRESS), "Delivered-To-email" },
      { PROP_ID(PR_RCVD_REPRESENTING_EMAIL_ADDRESS), "Delivered-To-email" },

      //{ PROPID, "X-Original-To" },
      //{ PROPID, "Return-Path" },

      { PROP_ID(PR_CLIENT_SUBMIT_TIME), "Date" },
      { PROP_ID(PR_MESSAGE_DELIVERY_TIME), "Date" },
      //      { PROP_ID(PR_CREATION_TIME), "Date" },  // When it was added to Outlook
      //      { PROP_ID(PR_LAST_MODIFICATION_TIME), "Date" },

      // { PROPID, "Priority" },

      //{ PROPID, "Content-Transfer-Encoding" },
      //{ PROPID, "Content-Type" },
      //{ PROPID, "X-Mailer" },

      // { PROPID, "X-Universally-Unique-Identifier" },
      { PROP_ID(PR_INTERNET_MESSAGE_ID), "Message-Id" },
      // { PROPID, "X-Spam-Status" },
      // { PROPID, "Authentication-Results" },
      // { PROPID, "MIME-Version" },
      // { PROPID, "Received-SPF" },
      // { PROPID, "User-Agent" },
      // { PROPID, "X-Received" },

      // { PROPID, "X-Smtp-Server" },

      //{ PROPID, "X-swiftinternet-MailScanner" },
      //{ PROPID, "X-swiftinternet-MailScanner-From" },
      //{ PROPID, "X-swiftinternet-MailScanner-ID" },
      //{ PROPID, "X-swiftinternet-MailScanner-Information" },

      // Could also take the transport properties and pipe through same logic as .eml
      { PROP_ID(PR_TRANSPORT_MESSAGE_HEADERS), "*" }

      // Also extract any Named Properties that start "X-"?
    };
#endif


    // Recipients

    // Attachment names

    // Named Properties

    return result;
  }

#ifdef INCLUDE_DIAGNOSTICS
  std::unique_ptr<POLE::Stream> Message::openStream(const std::string& path)
  {
    // Note this is C++14 only... check that CentOS G++ can build this
    // and change if neccessary.
    auto propStream = std::make_unique<POLE::Stream>(m_storage.get(), path);
    if(propStream->fail())
    {
      throw std::runtime_error("Failed to open stream " + path);
    }
    return propStream;
  }
#endif

#ifdef INCLUDE_DIAGNOSTICS
  void Message::parse()
  {
    parseNamedProperties();
    parseProperties();

    parseRecipients();
    parseAttachments();
  }
#endif

#ifdef INCLUDE_DIAGNOSTICS
  void Message::parseRecipients()
  {
    for(int i = 0; i < m_recipientCount; ++i)
    {
      parseRecipient(i);
    }
  }
#endif

#ifdef INCLUDE_DIAGNOSTICS
  void Message::parseRecipient(int i)
  {
    Trace("Recipient " << i);

    std::ostringstream pathStr;
    pathStr << "/" << StreamName_Recipient << "_#" << std::hex << std::setfill('0') << std::setw(8) << i;

    std::string propertyStreamName = pathStr.str() + "/" + StreamName_Properties_Version;
    StreamReader reader(openStream(propertyStreamName));

    // Reserved 8 byte header
    reader.skip(8);

    parsePropertyData(reader, pathStr.str());

  }
#endif

#ifdef INCLUDE_DIAGNOSTICS
  void Message::parseAttachments()
  {
    for(int i = 0; i < m_attachmentCount; ++i)
    {
      parseAttachment(i);
    }
  }

  void Message::parseAttachment(int i)
  {
    Trace("Attachment " << i);

    std::ostringstream pathStr;
    pathStr << "/" << StreamName_Attachment << "_#" << std::hex << std::setfill('0') << std::setw(8) << i;

    std::string propertyStreamName = pathStr.str() + "/" + StreamName_Properties_Version;
    StreamReader reader(openStream(propertyStreamName));

    // Reserved 8 byte header
    reader.skip(8);

    parsePropertyData(reader, pathStr.str());

    // Attachment is in stream __substg1.0_3701000D
  }
#endif

  void Message::parseNamedProperties()
  {
    // See Section 2.2.3 of [MC-OXMSG]
    // Open the String Stream so we can refer to it later
    std::string path{"/" + StreamName_NamedProperties};
    StreamReader stringReader(m_storage, path + "/" + StreamName_PropertyData+"00040102");

    // Open the Entry Stream
    StreamReader entryReader(m_storage, path + "/" +  StreamName_PropertyData+"00030102");
    int nEntries = entryReader.size() / 8;
    m_namedProperties.reserve(nEntries);
    for(int entryIndex = 0; entryIndex < nEntries; ++entryIndex)
    {
      auto idOrOffset = entryReader.readU32();
      auto indexAndKind = entryReader.readU32();

      bool isString = indexAndKind & 1;
      __unused int guidIndex = indexAndKind >> 1;

      uint16_t propertyID = 0x8000 + entryIndex;

      std::string name;
      if(isString)
      {
        stringReader.seek(idOrOffset);
        size_t length = stringReader.readU32();
        std::u16string name16 = stringReader.readString16(length);
        name = convert_utf16Toutf8(name16);
      }
      else
      {
        // Not sure what these mean...
        // MS-OXMSG Secion 2.2.3.1.2 says:
        // this value is the LID part of the PropertyName structure, as specified in [MS-OXCDATA] section 2.6.1.

        // Many of these are defined in [MS-OXPROPS]
        // GUID is something like: PSETID_Common {00062008-0000-0000-C000-000000000046}
        // LID is the idOrOffset
        // Can not find header file with them in...
        // eg. Common / 00008580 = PidLidInternetAccountName or dispidInetAcctName

        // If we were on Windows could use:
        // IMAPIProp::GetNamesFromIDs()
        // https://docs.microsoft.com/en-us/office/client-developer/outlook/mapi/imapiprop-getnamesfromids
        // Maybe we could have Windows command line tool that generates a source
        // file for us.

        auto lidIt = namedTagNames.find(idOrOffset);
        if(lidIt != namedTagNames.end())
        {
          name = lidIt->second;
        }
        else
        {
          std::ostringstream nameStr;
          nameStr << "LID_" << std::hex << std::setw(8) << std::setfill('0') << idOrOffset;
          name = nameStr.str();
        }
      }

      m_namedProperties[propertyID] = name;
      Trace("Named Property: ["
            << std::hex << std::setfill('0') << std::setw(4) << propertyID
            << "]="
            << name);
    }
  }

  void Message::parseRootHeader()
  {
    // Get the top level properties information
    std::string path{"/"};
    StreamReader reader(m_storage, path + StreamName_Properties_Version);

    reader.skip(8);
    __unused unsigned long nextRecipientID = reader.readU32();
    __unused unsigned long nextAttachmentID = reader.readU32();
    m_recipientCount = reader.readU32();
    m_attachmentCount = reader.readU32();
  }


#ifdef INCLUDE_DIAGNOSTICS
void Message::parseProperties()
  {
    // Get the top level properties information
    std::string path{"/"};
    StreamReader reader(openStream(path + StreamName_Properties_Version));
//    auto propStream = std::make_unique<POLE::Stream>(m_storage.get(), path + StreamName_Properties_Version);
//    if(propStream->fail())
//    {
//      throw std::runtime_error("Failed to open stream " + propStream->fullName());
//    }
//    StreamReader reader(std::move(propStream));

    unsigned long size = reader.size();
    Trace(reader.fullName() << ", " << size << " bytes");

    reader.skip(8);
    unsigned long nextRecipientID = reader.readU32();
    unsigned long nextAttachmentID = reader.readU32();
    m_recipientCount = reader.readU32();
    m_attachmentCount = reader.readU32();
    reader.skip(8);

    Trace("Recipients=" << m_recipientCount);
    Trace("Attachments=" << m_attachmentCount);
    Trace("Next RecipientID=" << nextRecipientID);
    Trace("Next AttachmentID=" << nextAttachmentID);

    parsePropertyData(reader, path);
  }

  void Message::parsePropertyData(StreamReader& reader, const std::string& path)
  {
    int nItems = (reader.size() - reader.tell()) / 16;
    for(int i = 0; (i < nItems) && !reader.fail(); ++i)
    {
      // Trace("Item: " << i);
      unsigned char itemBytes[16];
      reader.read(itemBytes, sizeof(itemBytes));

      unsigned long propTag = bytesToU32(itemBytes);
      unsigned long flags = bytesToU32(itemBytes+4);

      // The other 8 bytes depend on the type...
      unsigned short propType = PROP_TYPE(propTag);
      unsigned short propID = PROP_ID(propTag);

      auto tagNameIt = MapiMessage::mapiTagNames.find(propTag);
      std::string tagName;
      if(tagNameIt != MapiMessage::mapiTagNames.end())
      {
        tagName = tagNameIt->second;
      }
      else
      {
        auto namedPropertyIt = m_namedProperties.find(propID);
        if(namedPropertyIt != m_namedProperties.end())
        {
          tagName = namedPropertyIt->second;
        }
        else
        {
          std::ostringstream tagidStr;
          tagidStr << "UNKNOWN_" << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << propTag;
          tagName = tagidStr.str();
        }
      }

//      std::ostringstream hexbuf;
//      hexbuf << "0x";
//      for(int b = 8; b < 16; ++b)
//      {
//        hexbuf << std::setfill('0') << std::hex << std::setw(2) << (unsigned int) itemBytes[b];
//      }
//      Trace("proptype=0x" << std::setfill('0') << std::hex << std::setw(4) << (unsigned int) propType
//            << ", proptag=0x" << std::setfill('0') << std::hex << std::setw(4) << (unsigned int) propID
//            << ", tagname=" << tagName
//            << ", flags=0x" << std::setfill('0') << std::hex << std::setw(8) << flags
//            << ", Data=" << hexbuf.str());

      if(flags & PROPATTR_READABLE)
      {
        // Process....

        switch(propType)
        {
          case PT_SHORT:
          {
            unsigned short v = bytesToU16(itemBytes + 8);
            Trace(tagName << "=" << (unsigned int) v << " (I2)");
            break;
          }
          case PT_LONG:
          {
            unsigned long v = bytesToU32(itemBytes + 8);
            Trace(tagName << "=" << v << " (I4)");
            break;
          }
          case PT_FLOAT:
          {
            float v = bytesToFloat32(itemBytes + 8);
            Trace(tagName << "="<< v << "(R4)");
            break;
          }
          case PT_DOUBLE:
          {
            double v = bytesToFloat64(itemBytes + 8);
            Trace(tagName << "=" << v << " (R4)");
            break;
          }
          case PT_BOOLEAN:
          {
            bool v = bytesToBool(itemBytes + 8);
            Trace(tagName << "=" << (v ? "true" : "false") << " (Bool)");
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
            Trace(tagName << "=" << dateStr << " (SYSTIME)");
            break;
          }
          case PT_BINARY:
          {
            // Trace("BINARY... TODO, size=" << bytesToU32(itemBytes + 8));
            std::vector<uint8_t> v = getBinaryData(path, propTag, bytesToU32(itemBytes + 8));
            Trace(tagName << "=" << "BINARY: " << v.size() << " bytes\n" << hexdump(v));
            break;
          }
          case PT_UNICODE:
          {
            // Variable UTF16
            // Note the length is +2 for null termination
            std::u16string v16 = getString16(path, propTag, bytesToU32(itemBytes + 8));
            std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> stringConverter;
            std::string v8 = stringConverter.to_bytes(v16);
            Trace(tagName << "=\"" << v8 << "\" (UNICODE16)");
            break;
          }
          case PT_STRING8:
          {
            // Variable UTF8
            // Note the length is +1 for null termination
            std::string v = getString8(path, propTag, bytesToU32(itemBytes + 8));
            Trace(tagName << "=\"" << v << "\" (STRING8)");
            break;
          }
          default:
          {
            Trace(tagName << "=" << "Unknown property type " << propType);
            break;
          }
        }
      } // switch(propType)
    } // READABLE
  } // ::parse()
#endif

#ifdef INCLUDE_DIAGNOSTICS
  std::vector<uint8_t> Message::getBinaryData(const std::string& path, uint32_t proptag, size_t length)
  {
    std::ostringstream streamName;
    streamName << path;
    if(path.empty() || (path.back() != '/'))
    {
      streamName << "/";
    }
    streamName << StreamName_PropertyData
    << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << proptag;

    auto stream = openStream(streamName.str());

    std::vector<uint8_t> result(length);
    auto count = stream->read(result.data(), length);
    if(count != length)
    {
      std::ostringstream msg;
      msg << "Error reading from stream " << streamName.str() << ", wanted=" << length << ", result=" << count;
      throw std::runtime_error(msg.str());
    }
    return result;
  }

  /* Note length is +1 for null */
  std::string Message::getString8(const std::string& path, uint32_t proptag, size_t length)
  {
    auto bytes = getBinaryData(path, proptag, length-1);
    const char* chars = reinterpret_cast<const char*>(bytes.data());
    return std::string(chars, bytes.size());
  }

  /* Note lenth is +2 for null */
  std::u16string Message::getString16(const std::string& path, uint32_t proptag, size_t length)
  {
    auto bytes = getBinaryData(path, proptag, length-2);
    // Assume correct endian
    const char16_t* chars = reinterpret_cast<char16_t*>(bytes.data());
    return std::u16string(chars, bytes.size() / sizeof(char16_t));
  }
#endif

} // namespace
