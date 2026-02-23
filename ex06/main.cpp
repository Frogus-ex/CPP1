#include "Harl.hpp"

int
main ()
{
  Harl harl;
  std::string tmp;
  getline (std::cin, tmp);
  if (std::cin.eof ())
    return (1);
  harl.complain (tmp);
  return (0);
}