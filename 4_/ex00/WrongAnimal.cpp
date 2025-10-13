/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:56:26 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 08:57:14 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
std::cout << BLUE << "Call WrongAnimal default constructor." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
    *this = toCopy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
std::cout << BLUE << "Call WrongAnimal default destructor." << RESET << std::endl;
}
