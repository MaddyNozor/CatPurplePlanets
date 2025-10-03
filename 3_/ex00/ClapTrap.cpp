/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:42 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 15:22:19 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    _hitPoint = 10;
    _manaPoint = 10;
    _attackDamage = 0;
    _name = "[ANONYMOUS]";
    std::cout << BLUE << "Call constructor with no name" << RESET << std::endl;
}
ClapTrap::ClapTrap(std::string name) {
    _hitPoint = 10;
    _manaPoint = 10;
    _attackDamage = 0;
    if (name == "") {
        _name = "[ANONYMOUS]";
        std::cout << BLUE << "Call constructor with empty name" << RESET << std::endl;
        return;
    }
    _name = name;
    std::cout << BLUE << "Call constructor with name." << RESET << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &toCopy) {
        *this = toCopy;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
    if(this != &toCopy)
        this->_name = toCopy.getName();
    return *this;
}
ClapTrap::~ClapTrap() {
std::cout << BLUE << "Call destructor." << RESET << std::endl;
}

//=== GETTERS & SETTERS ===
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

