/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:34 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 11:49:15 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
std::cout << BLUE << "Call Dog default constructor." << RESET << std::endl;
}

Dog::Dog(const Dog &toCopy)
{
    *this = toCopy;
}

Dog &Dog::operator=(const Dog &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

Dog::~Dog() {
std::cout << BLUE << "Call Dog default destructor." << RESET << std::endl;
}

void    Dog::makeSound( void ) const{
    std::cout << YELLOW "Waf Waf ! *looks for the ball* " << RESET << std::endl;
}