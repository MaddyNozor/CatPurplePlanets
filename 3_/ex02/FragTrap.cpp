/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:04 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/06 15:43:32 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->setHitPoint(MAX_HP_FT);
    setMaxHitPoint(MAX_HP_FT);
    setManaPoint(MAX_MANA_FT);
    setAttackDamage(30);
    setName("[ANONYMOUS]");
    std::cout << BLUE << "Call FragTrap constructor with no name." << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->setHitPoint(MAX_HP_FT);
    setMaxHitPoint(MAX_HP_FT);
    this->_manaPoint = MAX_MANA_FT;
    _attackDamage = 30;
    if (name == "") {
        setName("[ANONYMOUS]");
        std::cout << BLUE << "Call FragTrap constructor with empty name" << RESET << std::endl;
        return;
    }
    _name = name;
    std::cout << BLUE << "Call FragTrap constructor with name." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy) {
    *this = toCopy;
    std::cout << BLUE << "Call FragTrap copy function." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy) {
    if(this != &toCopy) {
        this->setName(toCopy.getName());
        this->setHitPoint(toCopy._hitPoint);
        this->_attackDamage = toCopy._attackDamage;
        _manaPoint = toCopy._manaPoint;
    }
    return *this;
}

FragTrap::~FragTrap() {
std::cout << BLUE << "Call FragTrap " << _name << " destructor." << CYAN << "For you...I commit...seddoku..." << RESET << std::endl;
}

// Input: valid target's Name
// Return: Nothing
// Effect: explicit what's happenning when ClapTrap attacks
void    FragTrap::attack(const std::string& target) {
    if (getName() == "[ANONYMOUS]"){
        std::cout << RED << "Error : FragTrap couldn't find the target" << RESET << std::endl;
        return;
    }
    if (getManaPoint() <= 0){
        std::cout << RED << "Error : FragTrap " << this->getName() << " needs more Mana" << RESET << std::endl;
        return;
    }
    this->setManaPoint(this->getManaPoint() - 1);
    std::cout << CYAN << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage !" << RESET << std::endl;
    return;
}

// Input: none
// Return: none
// Effect: Info, FragTrap gives you a highfive.
void FragTrap::highFiveGuys() {
    std::cout << "Take these, gorgeous, you'll feel better!" << std::endl;
	std::cout << GREEN "FragTrap " << _name << " rise it's arm, requesting a highfive." RESET << std::endl;
    std::cout << "So... does this make me your favorite?" << std::endl;
}

void FragTrap::status() const {
    std::cout << YELLOW "[ FragTrap "<< _name << " ]" RESET << std::endl;
    std::cout << _name 
              << " | HP: " << _hitPoint 
              << " | Mana: " << _manaPoint 
              << " | ATK: " << _attackDamage 
              << std::endl;
}