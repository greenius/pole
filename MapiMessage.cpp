//
//  MapiMessage.cpp
//  MsgInfo
//
//  Created by Steven Green on 30/07/2019.
//  Copyright © 2019 Greenius Limited. All rights reserved.
//

#include "MapiMessage.hpp"

#include "mapidefs.h"
#include "mapitags.h"
#include "pole.h"

#include <iostream>
#include <iomanip>
#include <sstream>

#ifndef Trace
#define Trace(s) { std::cout << s << std::endl; }
#endif

namespace MapiMessage {

  inline unsigned short bytesToU16(const unsigned char* buffer)
  {
    return buffer[0] + (buffer[1] << 8);
  }

  inline unsigned short bytesToU32(const unsigned char* buffer)
  {
    return buffer[0] + (buffer[1] << 8) + (buffer[2] << 16) + (buffer[3] << 24);
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

        unsigned short propType = bytesToU16(itemBytes);
        unsigned short propTag = bytesToU16(itemBytes + 2);
        unsigned long flags = bytesToU32(itemBytes+4);

        // The other 8 bytes depend on the type...


        std::ostringstream hexbuf;
        hexbuf << "0x";
        for(int b = 8; b < 16; ++b)
        {
          hexbuf << std::setfill('0') << std::hex << std::setw(2) << (unsigned int) itemBytes[b];
        }
        Trace("proptype=0x" << std::setfill('0') << std::hex << std::setw(4) << (unsigned int)propType
        << ", proptag=0x" << std::setfill('0') << std::hex << std::setw(4) << (unsigned int)propTag
        << ", flags=0x" << std::setfill('0') << std::hex << std::setw(8) << flags
        << ", Data=" << hexbuf.str());
      }

    }
  }
}
