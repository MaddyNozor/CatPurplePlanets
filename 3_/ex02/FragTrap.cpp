/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:04 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/07 12:31:37 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    _hitPoint = MAX_HP_FT;
    _maxHitPoint = MAX_HP_FT;
    _manaPoint = MAX_MANA_FT;
    _attackDamage = 20;
    _name = "[ANONYMOUS]";
    std::cout << BLUE << "Call constructor with empty name." << RESET << "This FragTrap is anonymous" << std::endl;
}
FragTrap::FragTrap(std::string name) {
    _hitPoint = MAX_HP_FT;
    _maxHitPoint = MAX_HP_FT;
    _manaPoint = MAX_MANA_FT;
    _attackDamage = 20;
    if (name.empty()) {
        _name = "[ANONYMOUS]";
        std::cout << BLUE << "Call constructor with empty name." << RESET << "That FragTrap is anonymous" << std::endl;
        return;
    }
    _name = name;
    std::cout << BLUE << "Call constructor with name.  " << RESET  << "Hi, I'm FragTrap, my name is " << _name << std::endl;
}
FragTrap::FragTrap(const FragTrap &toCopy) {
        *this = toCopy;
        std::cout << BLUE << "Call copy function." << RESET << std::endl;
        std::cout << _name << " and " << toCopy.getName() << " are now twins !" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
    if(this != &toCopy) {
        this->_name = toCopy.getName();
        this->_hitPoint = toCopy.getHitPoint();
        this->_maxHitPoint = toCopy.getMaxHitPoint();
        this->_manaPoint = toCopy.getManaPoint();
        this->_attackDamage = toCopy.getAttackDamage();
        }
    return *this;
}
FragTrap::~FragTrap() {
std::cout << BLUE << "Call Frag Trap " << _name << " destructor." << RESET << " For you...I commit...seddoku..." << std::endl;
}

// Input: valid target's Name
// Return: Nothing
// Effect: explicit what's happenning when FragTrap attacks
void    FragTrap::attack(const std::string& target) {
    if (getManaPoint() <= 0){
        std::cout << RED << "Error : FragTrap " << _name << " needs more Mana" << RESET << std::endl;
        return;
    }
    _manaPoint--;
    std::cout << CYAN << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << RESET << std::endl;
    return;
}

// Input: none
// Return: none
// Effect: Info, FragTrap gives you a highfive.
void FragTrap::highFiveGuys() {
    std::cout << "Secret Handshake !" << std::endl;
	std::cout << GREEN "FragTrap " << _name << " rise it's arm, requesting a highfive." RESET << std::endl;
    std::cout << "So... does this make me your favorite?" << std::endl;
}

//No Input / No return
//Displays all ClapTrap's info in one line
void FragTrap::status(void) const {
    std::cout << YELLOW "[ FragTrap "<< this->_name << " ]" RESET 
              << "  HP: " << this->_hitPoint 
              << " | Mana: " << this->_manaPoint 
              << " | ATK: " << this->_attackDamage 
              << std::endl;
}
