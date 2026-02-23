#include "HumanB.hpp"

HumanB::~HumanB (){};
HumanB::HumanB (std::string name) : _Name (name), _Weapon (NULL){};

void
HumanB::setWeapon (Weapon &Weapon)
{
  _Weapon = &Weapon;
}

void
HumanB::attack ()
{
  if (_Weapon == NULL)
    std::cout << _Name << "> attacks with their "
              << "fist"
              << "\n";
  else
    {
      std::string weapon = _Weapon->getType ();
      std::cout << _Name << "> attacks with their " << weapon << "\n";
    }
}