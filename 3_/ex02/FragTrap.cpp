#include "FragTrap.hpp"

FragTrap::FragTrap() {
std::cout << BLUE << "Call constructor." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy)
{
    *this = toCopy;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

FragTrap::~FragTrap() {
std::cout << BLUE << "Call destructor." << RESET << std::endl;
}
