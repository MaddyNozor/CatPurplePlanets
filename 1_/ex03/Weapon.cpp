/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:19:55 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 15:01:55 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    std::cout << BLUE << " Constructor weapon no type called" << RESET << std::endl;
}

Weapon::Weapon(const std::string &type) {
    this->_type = type;
    std::cout << BLUE << "Constructor weapon with type called" << RESET << std::endl;
}

Weapon::~Weapon() {
    std::cout << BLUE << "Destructor weapon called" << RESET << std::endl;
}

//========= METHODS ================

const std::string &Weapon::getType() {
    return this->_type;
}

void Weapon::setType(const std::string &new_type) {
    this->_type = new_type;
}
