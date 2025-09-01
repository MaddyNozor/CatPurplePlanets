/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:17:30 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/01 13:14:21 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Call Zombie constructor." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Call Zombie destructor." << std::endl;
}

int     Zombie::setName(std::string entry) {
    this->_name = entry;
    return EXIT_SUCCESS;
}
    
std::string &Zombie::getName(void) {
    return (_name);
}

void        Zombie::announce(void) {
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}