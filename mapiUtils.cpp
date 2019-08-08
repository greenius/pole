//
//  mapiUtils.cpp
//  mapimessage
//
//  Created by Steven Green on 08/08/2019.
//  Copyright © 2019 CHLSoftware. All rights reserved.
//

#include "mapiUtils.hpp"

#include <codecvt>
#include <vector>
#include <iomanip>

namespace MapiMessage {

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

  bool istarts_with(const std::string& s, const std::string& prefix)
  {
    auto loc = std::locale();

    auto sEnd = s.end();
    auto pEnd = prefix.end();

    auto it = s.begin();
    auto pit = prefix.begin();
    for(; (it!=sEnd) && (pit != pEnd); ++it, ++pit)
    {
      if(std::toupper(*it, loc) != std::toupper(*pit, loc))
      {
        return false;
      }
    }
    return pit == pEnd;
  }

}

