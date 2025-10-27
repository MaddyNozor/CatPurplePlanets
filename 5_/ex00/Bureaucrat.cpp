/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:19:58 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/27 16:13:08 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
std::cout << BLUE << "Call Bureaucrat default constructor." << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy)
{
    *this = toCopy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
std::cout << BLUE << "Call Bureaucrat default destructor." << RESET << std::endl;
}
