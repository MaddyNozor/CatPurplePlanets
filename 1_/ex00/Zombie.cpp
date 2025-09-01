/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:17:30 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/01 17:12:01 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << BLUE << "Call Zombie constructor." << RESET << std::endl;
    std::cout << "\"Damn, I hear a new zombie grunting. Be careful !\"" << std::endl;
}

Zombie::Zombie(std::string entry) {
    std::cout << BLUE << "Call Zombie constructor." << RESET << std::endl;
    std::cout << "\"Damn, I hear a new zombie grunting. Be careful !\"" << std::endl;
    _name = entry.empty() ? "unknown" : entry;
    std::cout << "This Zombie name is " << getName() << std::endl;
}

Zombie::~Zombie() {
    std::cout << BLUE << "Call Zombie destructor." << RESET << std::endl;
    std::cout << "\"Hasta la vista " << getName() << "!\" *SKOUIK* " << std::endl;
}

int     Zombie::setName(std::string entry) {
    // if (entry.empty()) {
    //     entry = "[Mysterious Zombie]";
    // }
    this->_name = entry;
    return EXIT_SUCCESS;
}
    
std::string &Zombie::getName(void) {
    return (this->_name);
}

void        Zombie::announce(void) {
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}