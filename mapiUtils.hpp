//
//  mapiUtils.hpp
//  mapimessage
//
//  Created by Steven Green on 08/08/2019.
//  Copyright © 2019 CHLSoftware. All rights reserved.
//

#ifndef mapiUtils_hpp
#define mapiUtils_hpp

#include <chrono>
#include <sstream>

namespace MapiMessage {

  const std::string StreamName_Properties_Version{"__properties_version1.0"};
  const std::string StreamName_PropertyData{"__substg1.0_"};
  const std::string StreamName_NamedProperties{"__nameid_version1.0"};
  const std::string StreamName_Recipient{"__recip_version1.0"};
  const std::string StreamName_Attachment{"__attach_version1.0"};

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

  std::chrono::system_clock::time_point ptSystimeToSystemClock(std::uint64_t ptSysTime);

  inline std::string combineName(const std::string& name, const std::string& email)
  {
    if(!name.empty() && (name != email))
    {
      return name + " <" + email + ">";
    }
    else
    {
      return email;
    }
  }

  template<typename InputIt>
  std::string join(InputIt begin,
                   InputIt end,
                   const std::string & separator =", ",  // see 1.
                   const std::string & concluder ="")    // see 1.
  {
    std::ostringstream ss;

    if(begin != end)
    {
      ss << *begin++;
    }

    while(begin != end)
    {
      ss << separator;
      ss << *begin++;
    }

    ss << concluder;
    return ss.str();
  }

  std::string convert_utf16Toutf8(const std::u16string& src);

  std::string hexdump(const std::vector<uint8_t> data);

  bool istarts_with(const std::string& s, const std::string& prefix);



}




#endif /* mapiUtils_hpp */
