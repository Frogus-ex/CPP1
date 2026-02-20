#include "HumanB.hpp"

HumanB::HumanB (std::string name) : _Name (name), _Weapon (NULL){};
HumanB::~HumanB (){};

void
HumanB::setWeapon (Weapon &Weapon)
{
  _Weapon = &Weapon;
}

void
HumanB::attack ()
{
  std::string weapon = _Weapon->getType ();
  std::cout << _Name << "> attacks with their " << weapon << "\n";
}