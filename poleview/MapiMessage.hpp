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

// Forward References

namespace POLE
{
    class Storage;
}


namespace MapiMessage {

class Message
{
public:
    Message(const std::string& filename);
    ~Message();

    typedef std::map<std::wstring, std::wstring> HeaderMap;
    HeaderMap getHeaders() const;


private:
    std::unique_ptr<POLE::Storage> m_storage;
};

}



#endif /* MapiMessage_hpp */
