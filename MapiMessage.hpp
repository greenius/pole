//
//  MapiMessage.hpp
//  MsgInfo
//
//  Created by Steven Green on 30/07/2019.
//  Copyright © 2019 Greenius Limited. All rights reserved.
//

#ifndef MapiMessage_hpp
#define MapiMessage_hpp

#include <memory>
#include <string>
#include <map>
#include <vector>

// Forward References

namespace POLE
{
  class Storage;
  class Stream;
}


namespace MapiMessage {

  struct Recipient
  {
    std::wstring emailAddress;
    std::wstring displayName;
  };

  struct Attachment
  {
    std::string filename;
  };

class Message
{
public:
    static std::unique_ptr<Message> createFromFile(const std::string& filename);

    Message(std::shared_ptr<POLE::Storage> storage);
    ~Message();

    typedef std::map<std::wstring, std::wstring> HeaderMap;
    HeaderMap getHeaders() const;

private:
    Message();
    Message(const Message&);

  void parse();
  std::vector<uint8_t> getBinaryData(const std::string& path, uint32_t proptag, size_t length);
  std::string getString8(const std::string& path, uint32_t proptag, size_t length);
  std::u16string getString16(const std::string& path, uint32_t proptag, size_t length);
  std::unique_ptr<POLE::Stream> openStream(const std::string& path);

private:
    std::shared_ptr<POLE::Storage> m_storage;

  std::vector<std::unique_ptr<Recipient>> m_recipients;
  std::vector<std::unique_ptr<Attachment>> m_attachments;
  HeaderMap m_headerMap;
};

}



#endif /* MapiMessage_hpp */
