/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:20:04 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/27 17:09:28 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const trow() {
            return ("Max grade is 1. Cannot set rank value with yours")
        };
};

class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const trow() {
            return ("")
        };
};

void    exceptRank()
{
    try
    {
        checkRank();
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void checkRank(const int newvalue) const {
    try
    {
        
    }
    catch (Bureaucrat::GradeTooHighException& e) 
    {
        
    }
    catch (Bureaucrat::GradeTooLowException& e) 
    {
        
    }
}