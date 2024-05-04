#include <iostream>
#include <iomanip>
#include "Streams.h"

void increment_invites(Streams &source, std::string name){
  if (source.increment_invites(name)) {
    std::cout << "\nInvitation increased" << std::endl;
  } else {
    std::cout << "\nStream does not exist"<< std::endl;
  }
}

void add_stream(Streams &source, std::string name, std::string date, int invites){
  if (source.add_stream(name, date, invites)) {
    std::cout << "\nStream added successfully!" << std::endl;
  } else {
    std::cout << "\nStream already exists" << std::endl;
  }
}

void options(Streams &my_streams){
  char option {};
  
  while(toupper(option) != 'Q'){
    std::cout << "\nEnter A - Add a stream" << std::endl;
    std::cout << "Enter I - Increase invitation to stream" << std::endl;
    std::cout << "Enter D - Display stream details" << std::endl;
    std::cout << "Enter Q - Quit the program\n" << std::endl;

    std::cin >> option;

    switch (option){
    case 'a':
    case 'A':{
      std::cout << std::setw(20) << "Enter the name of the Stream (no spaces between characters❗️): ";
      std::string name;
      std::cin >> name;
      time_t now = time(0);
      std::string dt = ctime(&now);
      add_stream(my_streams, name, dt, 0);
      break;
    };
    case 'i':
    case 'I':{
      std::cout << std::setw(20) << "Enter the name of the stream: ";
      std::string name;
      std::cin >> name;
      increment_invites(my_streams, name);
    };
      break;
    case 'd':
    case 'D':{
      my_streams.display();
      break;
    };
    case 'q':
    case 'Q':
      break;
    default:
      break;
    }
  }
}

int main(){
  std::cout << std::setw(40) << "----- WELCOME 👋 -----" << std::endl;
  Streams my_streams;
  options(my_streams);
  return 0;
}