//
//  StreamReader.hpp
//  mapimessage
//
//  Created by Steven Green on 08/08/2019.
//  Copyright © 2019 CHLSoftware. All rights reserved.
//

#ifndef StreamReader_hpp
#define StreamReader_hpp

#include "mapiUtils.hpp"
#include "pole.h"

#include <vector>

namespace MapiMessage {

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



}

#endif /* StreamReader_hpp */
