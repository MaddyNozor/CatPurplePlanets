/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:22 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/10 12:34:14 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
std::cout << BLUE << "Call Animal default constructor." << RESET << std::endl;
}

Animal::Animal(const Animal &toCopy)
{
    *this = toCopy;
}

Animal &Animal::operator=(const Animal &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

Animal::~Animal() {
std::cout << BLUE << "Call Animal default destructor." << RESET << std::endl;
}

