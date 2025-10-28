/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:20:04 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/28 18:40:56 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

// class GradeTooHighException : public std::exception {
//     public:
//         virtual const char* what() const throw() {
//             return ("Max grade is 1. Cannot set rank value with yours");
//         }
// };

// class GradeTooLowException : public std::exception {
//     public:
//         virtual const char* what() const throw() {
//             return ("Min grade is 150. Cannot set rank value with yours");
//         };
// };

// void    exceptRank()
// {
//     try
//     {
//         // checkRank();
//     }
//     catch(const Bureaucrat::GradeTooHighException& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
// }

// void checkRank(const int newvalue) const {

// }

int main(void){
    Bureaucrat A;
    Bureaucrat B("Tom", 115);
    Bureaucrat C(B);
    Bureaucrat D("", 42);
    Bureaucrat E("TomLow", 151);
    Bureaucrat F("TomHigh", 0);

    // try
    // {
    //     if (rank > 150)
    //         throw GradeTooLowException();
    //     else if (rank < 1)
    //         throw GradeTooHighException();
    //     else
    //         this->_rank = rank;
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
     
    std::cout << "buro A: " << A << "\n";
    std::cout << "buro B: " << B << "\n";
    std::cout << "buro C: " << C << "\n";
    std::cout << "buro D: " << D << "\n";
    std::cout << "buro E: " << E << "\n";
    std::cout << "buro F: " << F << "\n";
    
    return 0;
}