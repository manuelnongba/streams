#include <iostream>
#include "Stream.h"
#include <string>
#include <iomanip>
  
Stream::Stream(std::string name, std::string date, int invites)
  :name{name}, date{date}, invites{invites}{
};

Stream::Stream(const Stream &source)
  :Stream{source.name, source.date, source.invites}{
  };

Stream::~Stream(){
}

void Stream::display()const {
  std::cout << "\nStream Name: " << name << std::endl;
  std::cout << "Invites: " << invites << std::endl;
  std::cout << "Date: "<< date << std::endl;
}


