#pragma once
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
private:
std::string _Name;
Weapon* _Weapon;
public:
  HumanB (std::string name);
  ~HumanB ();
  void attack ();
  void setWeapon (Weapon& Weapon);
};
