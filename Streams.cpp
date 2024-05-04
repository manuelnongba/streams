#include <iostream>
#include <string>
#include "Streams.h"
#include "Stream.h"

Streams::Streams(){
}

Streams::~Streams(){
}

bool Streams::add_stream(std::string name, std::string date, int invites){
  for(const Stream &stream: streams){
    if(stream.get_name() == name)
      return false;
  }
  Stream new_stream(name, date, invites);
  streams.push_back(new_stream);
  return true;
}

bool Streams::increment_invites(std::string name){
  for(Stream &stream: streams){
    if(stream.get_name() == name){
      stream.increment_invites();
      return true;
    }
  }
  return false;
}

void Streams::display() {
  if(streams.size() > 0){
    for(const Stream &stream: streams)
      stream.display();
  } else {
    std::cout << "\nNo Streams to display" << std::endl;
  }
}