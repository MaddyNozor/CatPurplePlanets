/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:19:58 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/28 16:20:12 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    this->_name = "[Mr X]";
    this->_rank = 150;
    std::cout << RED << "Warning : construct Bureaucrat without name or rank." << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int rank) {
    this->_name = name;
    this->_rank = rank;
    std::cout << BLUE << "Call Bureaucrat constructor. name and rank"  << RESET "\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & toCopy)
{
    *this = toCopy;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & toCopy)
{
    if(this != &toCopy)
    {
        _name = toCopy.getName();
        _rank = toCopy.getRank();
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
std::cout << BLUE << "Call Bureaucrat default destructor." << RESET << std::endl;
}

std::string const  & Bureaucrat::getName() const {
    return this->_name;
}

int const & Bureaucrat::getRank() const {
   return this->_rank; 
}

std::ostream & operator<<(std::ostream & s, Bureaucrat const & buro) {
    s << buro.getName() 
    << ", bureaucrat grade " 
    << buro.getRank() 
    << ".\n";
    return s;
}
