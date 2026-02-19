#pragma once
#include <iostream>
#include <string>

class Zombie
{
private:
  std::string _name;

public:
  Zombie ();
  ~Zombie ();
  void zombieName(std::string name);
  void announce (void);
};
Zombie *zombieHorde (int N, std::string name);
