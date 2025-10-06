/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:57 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/06 14:15:47 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->setHitPoint(MAX_HP_ST);
    setMaxHitPoint(MAX_HP_ST);
    setManaPoint(MAX_MANA_ST);
    setAttackDamage(20);
    setName("[ANONYMOUS]");
    std::cout << BLUE << "Call ScavTrap constructor with no name." << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    this->setHitPoint(MAX_HP_ST);
    setMaxHitPoint(MAX_HP_ST);
    setManaPoint(MAX_MANA_ST);
    setAttackDamage(20);
    if (name == "") {
        setName("[ANONYMOUS]");
        std::cout << BLUE << "Call ScavTrap constructor with empty name" << RESET << std::endl;
        return;
    }
    setName(name);
    std::cout << BLUE << "Call ScavTrap constructor with name." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy) {
    *this = toCopy;
    std::cout << BLUE << "Call ScavTrap copy function." << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy) {
    if(this != &toCopy) {
        this->setName(toCopy.getName());
        this->setHitPoint(toCopy.getHitPoint());
        setManaPoint(toCopy.getManaPoint());
        setAttackDamage(toCopy.getAttackDamage());
    }
    return *this;
}

ScavTrap::~ScavTrap() {
std::cout << BLUE << "Call Scav Trap " << _name << " destructor." << RESET << std::endl;
}

// Input: valid target's Name
// Return: Nothing
// Effect: explicit what's happenning when ClapTrap attacks
void    ScavTrap::attack(const std::string& target) {
    if (getName() == "[ANONYMOUS]"){
        std::cout << RED << "Error : ScavTrap couldn't find the target" << RESET << std::endl;
        return;
    }
    if (getManaPoint() <= 0){
        std::cout << RED << "Error : ScavTrap " << this->getName() << " needs more Mana" << RESET << std::endl;
        return;
    }
    this->setManaPoint(this->getManaPoint() - 1);
    std::cout << CYAN << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage !" << RESET << std::endl;
    return;
}

// Input: none
// Return: none
// Effect: Info, ScavTrap is in guard mode.
void ScavTrap::guardGate() {
	std::cout << GREEN "ScavTrap " << getName() << " is in GATE KEEPER mode" RESET << std::endl;
}

void ScavTrap::status() const {
    std::cout << YELLOW "[ ScavTrap "<< this->_name << " ] Status report, minion!" RESET << std::endl;
    std::cout << this->_name 
              << " | HP: " << this->_hitPoint 
              << " | Mana: " << this->_manaPoint 
              << " | ATK: " << this->_attackDamage 
              << std::endl;
}