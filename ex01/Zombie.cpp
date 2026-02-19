#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie () { std::cout << "Zombie destroyed\n"; }

void
Zombie::announce (void)
{
  std::cout << _name << ">: BraiiiiiiinnnzzzZ...\n";
}

void  Zombie::zombieName(std::string name)
{
  Zombie::_name = name;
}