

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
std::cout << BLUE << "Call constructor." << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
    *this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

ClapTrap::~ClapTrap() {
std::cout << BLUE << "Call destructor." << RESET << std::endl;
}
