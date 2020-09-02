#include <iostream>

#ifndef PAGE_HPP
#define PAGE_HPP

class page
{
public:
  void display();

  std::string header;
  std::string body;
private:
  const std::string pattern = "-=-=-=-=-=-=-=-";
};

#endif
