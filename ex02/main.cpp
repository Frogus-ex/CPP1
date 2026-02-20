#include "iostream"
#include "string"

int
main ()
{
  std::string brain = "HI THIS IS BRAIN";
  std::string *brainPTR = &brain;
  std::string &brainREF = brain;
  std::cout << &brain << "\n";
  std::cout << brainPTR << "\n";
  std::cout << &brainREF << "\n";
  std::cout << brain << "\n";
  std::cout << *brainPTR << "\n";
  std::cout << brainREF << "\n";
}