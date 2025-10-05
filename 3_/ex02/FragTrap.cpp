/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:04 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 14:29:18 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->setHitPoint(MAX_HP_FT);
    setManaPoint(MAX_MANA_FT);
    setAttackDamage(30);
    setName("[ANONYMOUS]");
    std::cout << BLUE << "Call FragTrap constructor with no name." << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->setHitPoint(MAX_HP_FT);
    setManaPoint(MAX_MANA_FT);
    setAttackDamage(30);
    if (name == "") {
        setName("[ANONYMOUS]");
        std::cout << BLUE << "Call FragTrap constructor with empty name" << RESET << std::endl;
        return;
    }
    setName(name);
    std::cout << BLUE << "Call FragTrap constructor with name." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy) {
    *this = toCopy;
    std::cout << BLUE << "Call FragTrap copy function." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy) {
    if(this != &toCopy) {
        this->setName(toCopy.getName());
        this->setHitPoint(toCopy.getHitPoint());
        setManaPoint(toCopy.getManaPoint());
        setAttackDamage(toCopy.getAttackDamage());
    }
    return *this;
}

FragTrap::~FragTrap() {
std::cout << BLUE << "Call Scav Trap destructor." << RESET << std::endl;
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
// Effect: Info, FragTrap is in guard mode.
void FragTrap::highFiveGuys() {
	std::cout << GREEN "FragTrap " << getName() << " rise it's arm, requesting a highfive." RESET << std::endl;
}
