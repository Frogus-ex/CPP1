#include "Harl.hpp"

// Constructors
Harl::Harl ()
{
  std::cout << "\e[0;33mDefault Constructor called of Harl\e[0m" << std::endl;
}

// Destructor
Harl::~Harl ()
{
  std::cout << "\e[0;31mDestructor called of Harl\e[0m" << std::endl;
}

void
Harl::debug (void)
{
  std::cout
      << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !"
      << "\n";
}

void
Harl::info (void)
{
  std::cout
      << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << "\n";
}

void
Harl::warning (void)
{
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
      << "\n";
}

void
Harl::error (void)
{
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << "\n";
}

void Harl::complain(std::string level) {
    void (Harl::*complaints[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]){
          index = i;
          break;
        }
      }
      switch (index)
      {
        case 1 :
          (this->*complaints[0])();
        case 2:
          (this->*complaints[1])();
        case 3:
          (this->*complaints[2])();
        case 4:
          (this->*complaints[3])();
          break ;
        default:
          std::cout << "[ Probably complaining about insignificant problems ] \n";

      }
}