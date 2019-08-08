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
#include "StreamPropertyReader.hpp"
#include "StreamReader.hpp"
#include "mapiUtils.hpp"


#include <iostream>
#include <iomanip>
#include <sstream>


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


} // local namespace


namespace MapiMessage {

#pragma mark Constants


#pragma mark MapMessage non member functioms


#pragma mark StreamReader


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

    // From
    auto fromName = propReader.getPropertyString(PROP_ID(PR_SENDER_NAME));
    auto fromEmail = propReader.getPropertyString(PROP_ID(PidTagSenderSmtpAddress));
    if(fromEmail.empty())
    {
      fromEmail = propReader.getPropertyString(PROP_ID(PR_SENDER_EMAIL_ADDRESS));
    }
    result.emplace("From", combineName(fromName, fromEmail));

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
    std::vector<std::string> to;
    std::vector<std::string> cc;
    std::vector<std::string> bcc;

    for(int i = 0; i < m_recipientCount; ++i)
    {
      std::ostringstream pathStr;
      pathStr << "/" << StreamName_Recipient << "_#" << std::hex << std::setfill('0') << std::setw(8) << i;

      StreamPropertyReader recipientReader(m_storage, pathStr.str());

      uint32_t emailType = MAPI_TO;
      if(recipientReader.hasProperty(PROP_ID(PR_RECIPIENT_TYPE)))
      {
        emailType = recipientReader.getPropertyInt(PROP_ID(PR_RECIPIENT_TYPE));
      }

      std::string name = recipientReader.getPropertyString(PROP_ID(PR_DISPLAY_NAME));
      std::string email = recipientReader.getPropertyString(PROP_ID(PR_SMTP_ADDRESS));
      if(email.empty())
      {
        // On some msg there is no SMTP_ADDRESS and it is in EMAIL_ADDRESS
        // But on others EMAIL_ADDRESS is something like "/o=ExchangeLabs/ou=...."
        email = recipientReader.getPropertyString(PROP_ID(PR_EMAIL_ADDRESS));
      }

      std::string recipientDisplay = combineName(name, email);

      switch(emailType)
      {
        case MAPI_CC:
          cc.push_back(recipientDisplay);
          break;
        case MAPI_BCC:
          bcc.push_back(recipientDisplay);
          break;
        case MAPI_TO:
          to.push_back(recipientDisplay);
          break;
        default:
          // Ignore... could be originator, P1 or have a flag?
          break;
      }
    }

    if(!to.empty())
    {
      result.emplace("To", join(to.begin(), to.end(), ", "));
    }
    if(!cc.empty())
    {
      result.emplace("Cc", join(cc.begin(), cc.end(), ", "));
    }
    if(!bcc.empty())
    {
      result.emplace("Bcc", join(bcc.begin(), bcc.end(), ", "));
    }


    // Attachment names

    // Only show visible attachments (ie. not inline)
    int attachmentCount = 0;
    for(int i = 0; i < m_attachmentCount; ++i)
    {
      std::ostringstream pathStr;
      pathStr << "/" << StreamName_Attachment << "_#" << std::hex << std::setfill('0') << std::setw(8) << i;


      StreamPropertyReader attachmentReader(m_storage, pathStr.str());

      bool isHidden = attachmentReader.getPropertyInt(PROP_ID(PR_ATTACHMENT_HIDDEN));
      if(!isHidden)
      {
        std::string name = attachmentReader.getPropertyString(PROP_ID(PR_ATTACH_LONG_FILENAME));
        if(name.empty())
        {
          name = attachmentReader.getPropertyString(PROP_ID(PR_ATTACH_FILENAME));
        }
        result.emplace("Attachment-Name", name);

#ifdef DEBUG
        std::string mimeType = attachmentReader.getPropertyString(PROP_ID(PR_ATTACH_MIME_TAG));
        result.emplace("Attachment-Mime", mimeType);
#endif
        ++attachmentCount;
      }
    }
    result.emplace("Attachment-Count", std::to_string(attachmentCount));

    // Named Properties

    for(auto namedItem: m_namedProperties)
    {
      if(istarts_with(namedItem.second, "X-"))
      {
        auto value = propReader.getPropertyString(namedItem.first);
        if(!value.empty())
        {
          result.emplace(namedItem.second, value);
        }
      }
    }

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
