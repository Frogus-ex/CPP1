#pragma once
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
private:
std::string _Name;
  Weapon &_Weapon;

public:
  HumanA (std::string name, Weapon &weapon);
  ~HumanA ();
  void setNameAndWeapon (std::string name, Weapon &weapon);
  void attack ();
};