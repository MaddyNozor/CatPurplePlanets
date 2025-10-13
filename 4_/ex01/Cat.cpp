/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:28 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 15:07:38 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    _brain = new Brain();
std::cout << PURPLE << "Call Cat default constructor." << RESET << std::endl;
}

Cat::Cat(const Cat &toCopy)
{
    *this = toCopy;
}

Cat &Cat::operator=(const Cat &toCopy)
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

Cat::~Cat() {
    delete _brain;
    std::cout << PURPLE << "Call Cat default destructor." << RESET << std::endl;
}

void    Cat::makeSound( void ) const{
    std::cout << PURPLE "Mew Miew ! *purr purr purr* " << RESET << std::endl;
}