/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:42 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/07 12:36:15 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    _hitPoint = MAX_HP;
    _manaPoint = MAX_MANA;
    _attackDamage = 0;
    _name = "[ANONYMOUS]";
    std::cout << BLUE << "Call constructor with empty name." << RESET << "This ClapTrap is anonymous" << std::endl;
}
ClapTrap::ClapTrap(std::string name) {
    _hitPoint = MAX_HP;
    _manaPoint = MAX_MANA;
    _attackDamage = 0;
    if (name.empty()) {
        _name = "[ANONYMOUS]";
        std::cout << BLUE << "Call constructor with empty name." << RESET << "That ClapTrap is anonymous" << std::endl;
        return;
    }
    _name = name;
    std::cout << BLUE << "Call constructor with name.  " << RESET  << "Hi, I'm ClapTrap, my name is " << _name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &toCopy) {
        *this = toCopy;
        std::cout << BLUE << "Call copy function." << RESET << std::endl;
        std::cout << _name << " and " << toCopy.getName() << " are now twins !" << std::endl;
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
std::cout << BLUE << "Call destructor." << RESET << std::endl;
std::cout << "The robot is dead, long live the robot!" << std::endl;
}

//=== GETTERS ===
std::string ClapTrap::getName(void) const {
    return _name;
}

int ClapTrap::getHitPoint(void) const {
    return _hitPoint;
}

int ClapTrap::getManaPoint(void) const {
    return _manaPoint;
}

int ClapTrap::getAttackDamage(void) const {
    return _attackDamage;
}

//=== SETTERS ===
void ClapTrap::setName(const std::string newName){
    newName.empty() ? _name = "[ANONYMOUS]" : _name = newName;
}
//Check newValue, may correct it to be between 0 and MAX_HP, and set it
void ClapTrap::setHitPoint(const int newValue) {
    newValue < 0 ? _hitPoint = 0 : _hitPoint = newValue;
    newValue > MAX_HP ? _hitPoint = MAX_HP : _hitPoint = newValue;
}
//Check newValue, may correct it to be between 0 and MAX_MANA, and set it
void ClapTrap::setManaPoint(const int newValue) {
    newValue < 0 ? _manaPoint = 0 : _manaPoint = newValue;
    newValue > MAX_MANA ? _manaPoint = MAX_MANA : _manaPoint = newValue;
}
//Check newValue, may correct it to be positiv
void ClapTrap::setAttackDamage(const int newValue) {
    newValue < 0 ? _attackDamage = 0 :_attackDamage = newValue;
}

//=== MEMBER FUNCTIONS ===

// Input: valid target's Name
// Return: Nothing
// Effect: explicit what's happenning when ClapTrap attacks
void    ClapTrap::attack(const std::string& target) {
    if (target.empty() || target == "[ANONYMOUS]"){
        std::cout << RED << "Error : ClapTrap couldn't find the target" << RESET << std::endl;
        return;
    }
    if (getManaPoint() <= 0){
        std::cout << RED << "Error : ClapTrap " << this->getName() << " needs more Mana" << RESET << std::endl;
        return;
    }
    _manaPoint--;
    std::cout << CYAN << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage !" << RESET << std::endl;
    return;
}

// Input: amount of damage taken
// Return: Nothing
// Effect: decrease HP by <amount> points
void    ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoint <= 0){
        std::cout << RED << "Error : ClapTrap " << _name << " already HS. Please stop." << RESET << std::endl;
        return;
    }
    (int)amount <= _hitPoint ? _hitPoint -= amount : _hitPoint = 0;

    std::cout << CYAN << "ClapTrap " << _name << " took " << amount <<  " damages" << RESET << std::endl;
    return;
}

// Input: amount of damage healed
// Return: Nothing
// Effect: decrease HP by <amount> points
void    ClapTrap::beRepaired(unsigned int amount) {
    if (_manaPoint <= 0){
        std::cout << RED << "Error : ClapTrap " << _name << " needs more Mana" << RESET << std::endl;
        return;
    }
    if (_hitPoint >= MAX_HP){
        std::cout << RED << "Error : ClapTrap " << _name << " is full life" << RESET << std::endl;
        return;
    }
    _manaPoint--;
    (amount + _hitPoint) < MAX_HP ? _hitPoint += amount : _hitPoint = MAX_HP;
    std::cout << CYAN << _name << " repairs himself and regains up to " << amount << " HP !" << RESET << std::endl;
    if (_hitPoint == MAX_HP)
                std::cout << GREEN << "Good news : ClapTrap " << _name << " is now full life !" << RESET << std::endl;
    return;
}

// Input: non empty string 
// Return: Nothing
// Effect: change name of an anomymous robot
void ClapTrap::renameAnonymous(const std::string newName) {
    if (_name != "[ANONYMOUS]") {
        std::cout << RED "Error : " << _name << " isn't anonymous." << RESET << std::endl;
        return;
    }
    if (newName.empty() || newName == "[ANONYMOUS]") {
        std::cout << RED "Error : invalid newName" << RESET << std::endl;
        return; 
    }
    this -> setName(newName);
}

//No Input / No return
//Displays all ClapTrap's info
void ClapTrap::status(void) const {
    std::cout << YELLOW "[ ClapTrap "<< this->_name << " ]" RESET 
              << "  HP: " << this->_hitPoint 
              << " | Mana: " << this->_manaPoint 
              << " | ATK: " << this->_attackDamage 
              << std::endl;
}

