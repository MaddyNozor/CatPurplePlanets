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
std::cout << BLUE << "Call constructor." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy)
{
    *this = toCopy;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

FragTrap::~FragTrap() {
std::cout << BLUE << "Call destructor." << RESET << std::endl;
}
