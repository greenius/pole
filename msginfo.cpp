/*
 * Display info about .msg Outlook message file
 */

#include "pole.h"

#include <string>
#include <iostream>
#include <vector>




void showInfo(POLE::Storage* store, unsigned index)
{
  POLE::DirEntry* entry = store->dirTree()->entry(index);
  if(entry->dir)
  {
    std::cout << entry->name << std::endl;
    // std::cout << store->dirTree()->fullName(index) << std::endl;
    for(auto child: store->dirTree()->children(index))
    {
      showInfo(store, child);
    }
  }
  else
  {
    std::cout << entry->name << " " << entry->size << " bytes" << std::endl;
    // std::cout << store->dirTree()->tree->fullName(index) << std::endl;

    std::unique_ptr<POLE::Stream> stream(new POLE::Stream(store, store->dirTree()->fullName(index)));
    if( !stream )
    {
      std::cout << "could not get stream" << std::endl;
      return;
    }
    if( stream->fail() )
    {
      std::cout << "stream->fail()" << std::endl;
      return;
    }
    
    // std::cout << "Size: " << stream->size() << " bytes" << std::endl;
    unsigned char buffer[16];
    for( ;; )
    {
      auto read = stream->read( buffer, sizeof( buffer ) );
      for( unsigned i = 0; i < read; i++ )
        printf( "%02x ", buffer[i] );
      std::cout << "    ";
      for( unsigned i = 0; i < read; i++ )
        printf( "%c", ((buffer[i]>=32)&&(buffer[i]<128)) ? buffer[i] : '.' );
      std::cout << std::endl;
      if( read < sizeof( buffer ) ) break;
    }
  }
}

void showMsgFile(const std::string& filename)
{
  POLE::Storage* storage = new POLE::Storage( filename );
  storage->open();
  if( storage->result() != POLE::Storage::Ok )
  {
    std::cout << "Error opening file " << filename << std::endl;
    return;
  }

  showInfo(storage, 0);
}

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Usage: msginfo filenames..." << std::endl;
  }

  std::vector<std::string> filenames;
  for(int i = 1; i < argc; ++i)
  {
    filenames.push_back(argv[i]);
  }

  for(auto fname: filenames)
  {
    std::cout << "Reading " << fname << std::endl;
    showMsgFile(fname);
  }


  return 0;
}
