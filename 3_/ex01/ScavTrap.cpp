/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:57 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/07 14:41:07 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _hitPoint = MAX_HP_ST;
    _maxHitPoint = MAX_HP_ST;
    _manaPoint = MAX_MANA_ST;
    _attackDamage = 20;
    _name = "[ANONYMOUS]";
    std::cout << BLUE << "Call constructor with empty name." << RESET << "This ScavTrap is anonymous" << std::endl;
}
ScavTrap::ScavTrap(std::string name) {
    _hitPoint = MAX_HP_ST;
    _maxHitPoint = MAX_HP_ST;
    _manaPoint = MAX_MANA_ST;
    _attackDamage = 20;
    if (name.empty()) {
        _name = "[ANONYMOUS]";
        std::cout << BLUE << "Call constructor with empty name." << RESET << "That ScavTrap is anonymous" << std::endl;
        return;
    }
    _name = name;
    std::cout << BLUE << "Call constructor with name.  " << RESET  << "Hi, I'm ScavTrap, my name is " << _name << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &toCopy) {
        *this = toCopy;
        std::cout << BLUE << "Call copy function." << RESET << std::endl;
        std::cout << _name << " and " << toCopy.getName() << " are now twins !" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
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
ScavTrap::~ScavTrap() {
std::cout << BLUE << "Call Scav Trap " << _name << " destructor." << CYAN << " I'll die the way I lived: annoying!" << RESET << std::endl;
}

// Input: valid target's Name
// Return: Nothing
// Effect: explicit what's happenning when ScavTrap attacks
void    ScavTrap::attack(const std::string& target) {
    if (getManaPoint() <= 0){
        std::cout << RED << "Error : ScavTrap " << _name << " needs more Mana" << RESET << std::endl;
        return;
    }
    _manaPoint--;
    std::cout << CYAN << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << RESET << std::endl;
    return;
}

// Input: none
// Return: none
// Effect: Info, ScavTrap is in guard mode.
void ScavTrap::guardGate() {
    std::cout << "Here I come to save the day!" << std::endl;
	std::cout << GREEN "ScavTrap " << _name << " is in GATE KEEPER mode" RESET << std::endl;
    std::cout << "Look at me! I'm dancing! I'm dancing!" << std::endl;
}

//No Input / No return
//Displays all ScavTrap's info in one line
void ScavTrap::status(void) const {
    std::cout << YELLOW "[ ScavTrap "<< this->_name << " ]" RESET 
              << "  HP: " << this->_hitPoint 
              << " | Mana: " << this->_manaPoint 
              << " | ATK: " << this->_attackDamage 
              << std::endl;
}
