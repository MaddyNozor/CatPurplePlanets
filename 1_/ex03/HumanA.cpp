/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:17:59 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 14:58:56 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) 
    : _name(name), _weapon(weapon) {
    // this->_name = name;
    // this->_weapon = weapon;
    std::cout << BLUE << "Constructor A called" << RESET << std::endl;    
}

HumanA::~HumanA() {
    std::cout << BLUE << "Destructor A called " << RESET << std::endl;
}

void HumanA::attack() const {
    std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}

