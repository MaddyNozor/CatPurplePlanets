/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:34 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 15:07:45 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    _brain = new Brain();
std::cout << YELLOW << "Call Dog default constructor." << RESET << std::endl;
}

Dog::Dog(const Dog &toCopy)
{
    *this = toCopy;
}

Dog &Dog::operator=(const Dog &toCopy)
{
    if(this != &toCopy)
    {
		_type = toCopy._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*toCopy._brain);
    }
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << YELLOW << "Call Dog default destructor." << RESET << std::endl;
}

void    Dog::makeSound( void ) const{
    std::cout << YELLOW "Waf Waf ! *looks for the ball* " << RESET << std::endl;
}