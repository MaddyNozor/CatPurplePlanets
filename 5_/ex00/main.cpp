/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:20:04 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/28 16:19:36 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return ("Max grade is 1. Cannot set rank value with yours");
        }
};

class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return ("");
        };
};

void    exceptRank()
{
    try
    {
        // checkRank();
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

// void checkRank(const int newvalue) const {
//     try
//     {
        
//     }
//     catch (Bureaucrat::GradeTooHighException& e) 
//     {
        
//     }
//     catch (Bureaucrat::GradeTooLowException& e) 
//     {
        
//     }
// }

int main(void){
    Bureaucrat A;
    Bureaucrat C("Tom", 115);
    Bureaucrat B(C);
    
    std::cout << "buro A: " << A << "\n";
    std::cout << "buro C: " << C << "\n";
    std::cout << "buro B: " << B << "\n";
    
    return 0;
}