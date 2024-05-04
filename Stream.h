#ifndef _STREAM_H_
#define _STREAM_H_

#include <string>
#include <ctime>

class Stream{
  private:
    std::string name;
    std::string date;
    int invites;
  
  public:
    Stream(std::string name, std::string date, int invites);
    Stream(const Stream &source);

    void set_name(std::string name){
      this->name = name;
    };
    std::string get_name() const {return name;}
    void set_rating(std::string date){
      this->date = date;
    }
    std::string get_rating() const {return date;}
    void increment_invites(){invites++;};
    void display() const;

    ~Stream();
};

#endif