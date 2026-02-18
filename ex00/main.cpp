#include "Zombie.hpp"

int
main ()
{
  randomChump("coco");
  Zombie *z1 = newZombie("Bob");
  z1->announce();
  delete z1;
  return 0;
}