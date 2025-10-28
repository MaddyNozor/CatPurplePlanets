/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:19:58 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/28 18:41:15 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << BLUE << "Call default Bureaucrat constructor.\n";
    this->_name = "[Mr X]";
    this->_rank = 150;
    std::cout << RED << "Warning : construct Bureaucrat without name or rank." << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int rank) {
    std::cout << BLUE << "Call Bureaucrat constructor." << RESET "\n";
    // if (name == "") {
    //     std::cout << "Need a name\n";
    //     return;
    // }
    this->_name = name;
    // try
    // {
    //     if (rank > 150)
    //         throw GradeTooLowException();
    //     else if (rank < 1)
    //         throw GradeTooHighException();
    //     else
            this->_rank = rank;
    // }
    //     catch (const GradeTooHighException & low) 
    // {
    //     std:: cout << YELLOW "Exeption caught : "<< RESET " \n";
    //     std::cout << low.what();
    //     std:: cout << RED "Cannot set rank value : highest grade is 1 and yours is " << rank << RESET " \n";
    //     return;
    // }
    // catch (const GradeTooLowException & high) 
    // {
    //     std:: cout << YELLOW "Exeption caught : "<< RESET " \n";
    //     std::cout << high.what();
    //     std:: cout << RED "Cannot set rank value : lowest grade is 150 and yours is " << rank << RESET " \n";
    //             return;
    // }
    //  std::cout << CYAN << *this << RESET "\n";
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
