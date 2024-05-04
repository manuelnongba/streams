#ifndef _STREAMS_H_
#define _STREAMS_H_

#include <string>
#include "Stream.h"

class Streams{
  private:
    std::vector<Stream> streams;

  public:
    Streams();

  bool add_stream(std::string name, std::string date, int invites);

  bool increment_invites(std::string name);

  void display();

  ~Streams();
};

#endif