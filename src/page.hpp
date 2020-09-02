#ifndef PAGE_HPP
#define PAGE_HPP

#include <iostream>

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
