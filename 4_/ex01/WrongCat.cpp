/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:56:32 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 11:48:50 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
std::cout << BLUE << "Call WrongCat default constructor." << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &toCopy)
{
    *this = toCopy;
}

WrongCat &WrongCat::operator=(const WrongCat &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

void    WrongCat::makeSound( void ) const{
    std::cout << RED "Exter-minette ! *purr purr purr* " << RESET << std::endl;
}

WrongCat::~WrongCat() {
std::cout << BLUE << "Call WrongCat default destructor." << RESET << std::endl;
}
