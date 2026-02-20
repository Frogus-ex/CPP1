#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &weapon)
    : _Weapon (weapon), _Name (name){};
HumanA::~HumanA (){};

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