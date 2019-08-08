//
//  StreamPropertyReader.hpp
//  mapimessage
//
//  Created by Steven Green on 08/08/2019.
//  Copyright © 2019 CHLSoftware. All rights reserved.
//

#ifndef StreamPropertyReader_hpp
#define StreamPropertyReader_hpp

#include <cstdint>
#include <string>
#include <vector>

// Forward References

namespace POLE
{
  class Storage;
  class Stream;
}


namespace MapiMessage {

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

  bool hasProperty(uint16_t propid) const;
  std::string getPropertyString(uint16_t propid) const;
  uint32_t getPropertyInt(uint16_t propid) const;

private:
  void readHeaders();
  std::vector<uint8_t> getBinaryData(uint32_t proptag, size_t length) const;
  std::string getString8(uint32_t proptag, size_t length) const;
  std::u16string getString16(uint32_t proptag, size_t length) const;
  const PropEntry* find(uint16_t propid) const;

  std::string m_path;
  std::shared_ptr<POLE::Storage> m_store;
  /* Just keep a vector... we'll have to iterate to find propid. If it is a performance problem then replace with a map or multimap */
  std::vector<PropEntry> m_entries;
};

}

#endif /* StreamPropertyReader_hpp */
