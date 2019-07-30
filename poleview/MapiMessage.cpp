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

#ifndef Trace
#define Trace(s) { std::cout << s << std::endl; }
#endif

namespace MapiMessage {

    Message::Message(const std::string& filename) :
    m_storage(new POLE::Storage(filename))
    {
        Trace("Loaded " << filename);
    }

    Message::~Message()
    {
        Trace("Destruct Message");
    }

    Message::HeaderMap Message::getHeaders() const
    {
        HeaderMap map;

        map[L"test"] = L"a test header";

        return map;
    }

}
