/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:22 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 11:53:37 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    _type = "Animal";
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
        _type = toCopy.getType();
    }
    return *this;
}

Animal::~Animal() {
    std::cout << BLUE << "Call Animal default destructor." << RESET << std::endl;
}

const std::string &Animal::getType( void ) const {
    return _type;
}



void    Animal::makeSound( void ) const{
    std::cout << GREEN "A mysterious animal cries" << RESET << std::endl;
}