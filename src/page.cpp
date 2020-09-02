#include "page.hpp"

void page::display()
{
  system("clear");

  std::cout << pattern + "\n\n";
  std::cout << header  + "\n\n";
  std::cout << pattern + "\n\n";
  std::cout << body    + "\n\n";
}
