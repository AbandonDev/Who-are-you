#include "page.hpp"

void page::display()
{
  #if defined(__MINGW32__)
  system("cls");
  #elif defined(__MINGW64__)
  system("cls");
  #elif defined(_WIN32)
  system("cls");
  #else
  system("clear");
  #endif

  std::cout << pattern + "\n\n";
  std::cout << header  + "\n\n";
  std::cout << pattern + "\n\n";
  std::cout << body    + "\n\n";
}
