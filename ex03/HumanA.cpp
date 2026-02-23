#include "HumanA.hpp"

HumanA::~HumanA (){};
HumanA::HumanA (std::string name, Weapon &weapon)
    : _Name (name), _Weapon (weapon){};

void
HumanA::setNameAndWeapon (std::string name, Weapon &Weapon)
{
  _Name = name;
  _Weapon = Weapon;
}

void
HumanA::attack ()
{
  std::string weapon = _Weapon.getType ();
  std::cout << _Name << "> attacks with their " << weapon << "\n";
}