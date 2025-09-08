/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:19:12 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 16:36:57 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
    : _name(name) {
        this->_weapon = NULL;
        std::cout << BLUE << "Constructor B called " << RESET << std::endl;
    }

HumanB::~HumanB() {
    std::cout << BLUE << "Destructor B called " << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon) {
    this->_weapon = &new_weapon;
}

void HumanB::attack() const {
    if (this->_weapon) {
        std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
    } else {
        std::cout << this->_name << " has no weapon" << std::endl;
    }
}
