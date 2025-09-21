#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
std::cout << BLUE << "Call constructor." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy)
{
    *this = toCopy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

ScavTrap::~ScavTrap() {
std::cout << BLUE << "Call destructor." << RESET << std::endl;
}
