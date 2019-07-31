/*
 * Display info about .msg Outlook message file
 */


#include "MapiMessage.hpp"
#include "pole.h"


#include <string>
#include <iostream>
#include <vector>




void showInfo(POLE::Storage* store, const std::string& path)
{
  // POLE::DirEntry* entry = store->dirTree()->entry(index);
  if(store->isDirectory(path))
    // if(entry->dir)
  {
    std::cout << path << std::endl;
    // std::cout << store->dirTree()->fullName(index) << std::endl;
    // for(auto child: store->dirTree()->children(index))
    for(auto child: store->entries(path))
    {
      showInfo(store, path + child + "/");
    }
  }
  else
  {
    // std::cout << entry->name << " " << entry->size << " bytes" << std::endl;
    // std::cout << store->dirTree()->tree->fullName(index) << std::endl;

    //        std::unique_ptr<POLE::Stream> stream(new POLE::Stream(store, store->dirTree()->fullName(index)));
    std::unique_ptr<POLE::Stream> stream(new POLE::Stream(store, path));
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

    std::cout << path << stream->size() << " bytes" << std::endl;
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

  showInfo(storage, "/");
}

void showHeaders(const std::string& filename)
{
  auto message = MapiMessage::Message::createFromFile(filename);

  auto headers = message->getHeaders();
  for(auto header: headers)
  {
    std::wcout << header.first << ": " << header.second << std::endl;
  }
}

void usage()
{
  std::cout << "Usage: msginfo [options] filenames...\n"
  << "Options\n"
  << "\t-h --headers: Show Headers\n"
  << "\t-d --dump: Dump data\n";
}

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    usage();
  }

  bool actionShowHeaders = false;
  bool actionDumpData = false;


  std::vector<std::string> filenames;
  for(int i = 1; i < argc; ++i)
  {
    std::string arg(argv[i]);

    if( (arg == "-h") || (arg == "--headers"))
    {
      actionShowHeaders = true;
    }
    else if((arg == "-d") || (arg == "--dump"))
    {
      actionDumpData = true;
    }
    else
    {
      filenames.push_back(arg);
    }
  }

  if(!actionShowHeaders && !actionDumpData)
  {
    actionDumpData = true;
  }

  if(filenames.empty())
  {
    usage();
  }


  for(auto fname: filenames)
  {
    std::cout << "Reading " << fname << std::endl;

    if(actionDumpData)
    {
      showMsgFile(fname);
    }

    if(actionShowHeaders)
    {
      showHeaders(fname);
    }
  }


  return 0;
}
