/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:28 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/10 12:39:29 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
std::cout << BLUE << "Call Cat default constructor." << RESET << std::endl;
}

Cat::Cat(const Cat &toCopy)
{
    *this = toCopy;
}

Cat &Cat::operator=(const Cat &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

Cat::~Cat() {
std::cout << BLUE << "Call Cat default destructor." << RESET << std::endl;
}
