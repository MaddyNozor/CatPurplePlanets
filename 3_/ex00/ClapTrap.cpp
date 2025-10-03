/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:42 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 14:28:08 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
std::cout << BLUE << "Call constructor." << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
    *this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

ClapTrap::~ClapTrap() {
std::cout << BLUE << "Call destructor." << RESET << std::endl;
}
