/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:42 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 18:33:26 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    _hitPoint = MAX_HP;
    _manaPoint = MAX_MANA;
    _attackDamage = 0;
    _name = "[ANONYMOUS]";
    std::cout << BLUE << "Call CT constructor with no name" << RESET << std::endl;
}
ClapTrap::ClapTrap(std::string name) {
    _hitPoint = MAX_HP;
    _manaPoint = MAX_MANA;
    _attackDamage = 0;
    if (name == "") {
        _name = "[ANONYMOUS]";
        std::cout << BLUE << "Call CT constructor with empty name" << RESET << std::endl;
        return;
    }
    _name = name;
    std::cout << BLUE << "Call CT constructor with name." << RESET << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &toCopy) {
        *this = toCopy;
        std::cout << BLUE << "Call CT copy function." << RESET << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
    if(this != &toCopy) {
        this->_name = toCopy.getName();
        this->_hitPoint = toCopy.getHitPoint();
        this->_manaPoint = toCopy.getManaPoint();
        this->_attackDamage = toCopy.getAttackDamage();
        }
    return *this;
}
ClapTrap::~ClapTrap() {
std::cout << BLUE << "Call CT destructor." << RESET << std::endl;
}

//=== GETTERS ===
std::string ClapTrap::getName(void) const {
    return _name;
}

int ClapTrap::getHitPoint(void) const {
    int result = 0; 
    result = this -> _hitPoint;
    return(result);
}

int ClapTrap::getManaPoint(void) const {
    return _manaPoint;
}

int ClapTrap::getAttackDamage(void) const {
    return _attackDamage;
}

//=== SETTERS ===
void ClapTrap::setName(const std::string newName){
    this -> _name = newName;
}
void ClapTrap::setHitPoint(const int newValue) {
    this -> _hitPoint = newValue;
}
void ClapTrap::setManaPoint(const int newValue) {
    _manaPoint = newValue;
}
void ClapTrap::setAttackDamage(const int newValue) {
    _attackDamage = newValue;
}

//=== MEMBER FUNCTIONS ===

// Input: valid target's Name
// Return: Nothing
// Effect: explicit what's happenning when ClapTrap attacks
void    ClapTrap::attack(const std::string& target) {
    if (getName() == "[ANONYMOUS]"){
        std::cout << RED << "Error : ClapTrap couldn't find the target" << RESET << std::endl;
        return;
    }
    if (getManaPoint() <= 0){
        std::cout << RED << "Error : ClapTrap " << this->getName() << " needs more Mana" << RESET << std::endl;
        return;
    }
    this->setManaPoint(this->getManaPoint() - 1);
    std::cout << CYAN << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage !" << RESET << std::endl;
    return;
}

// Input: amount of damage taken
// Return: Nothing
// Effect: decrease HP by <amount> points
void    ClapTrap::takeDamage(unsigned int amount) {
    int tempHP = this->getHitPoint();
    const std::string name = this->getName();
    
    if (tempHP <= 0){
        std::cout << RED << "Error : ClapTrap " << name << " already HS. Please stop." << RESET << std::endl;
        return;
    }
    tempHP -= amount;
    if (tempHP < 0) {
        tempHP = 0;
        std::cout << RED << "No more HP, so long ClapTrap " << name << "  !" << RESET << std::endl;
    }
    this->setHitPoint(tempHP);
    std::cout << CYAN << "ClapTrap " << name << " took " << amount <<  " damages" << RESET << std::endl;
    return;
}

// Input: amount of damage healed
// Return: Nothing
// Effect: decrease HP by <amount> points
void    ClapTrap::beRepaired(unsigned int amount) {
    int tempHP = this->getHitPoint();
    int tempMP = this->getManaPoint();
    const std::string name = this->getName();

    if (tempMP <= 0){
        std::cout << RED << "Error : ClapTrap " << name << " needs more Mana" << RESET << std::endl;
        return;
    }
    if (tempHP == MAX_HP){
        std::cout << RED << "Error : ClapTrap " << name << " is full life" << RESET << std::endl;
        return;
    }
    
    tempHP += amount;
    tempMP -= 1;
    if (tempHP > MAX_HP) {
        tempHP = MAX_HP;
        std::cout << GREEN << "Good news : ClapTrap " << name << " is now full life !" << RESET << std::endl;
    }
    this->setHitPoint(tempHP);
    this->setManaPoint(tempMP);
    std::cout << CYAN << "ClapTrap " << name << " repairs himself, gg !" << RESET << std::endl;
    
    return;
}

void ClapTrap::status(void) const {
    std::cout << YELLOW "[ ClapTrap "<< this->_name << " ] Status report, minion!" RESET << std::endl;
    std::cout << this->_name 
              << " | HP: " << this->_hitPoint 
              << " | Mana: " << this->_manaPoint 
              << " | ATK: " << this->_attackDamage 
              << std::endl;
}

