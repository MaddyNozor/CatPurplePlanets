/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:34 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/10 15:25:48 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
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

void    Dog::makeSound( void ){
    std::cout << PURPLE "Waf Waf ! ** " << RESET << std::endl;
}