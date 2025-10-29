/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:20:04 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/29 17:32:26 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void){

    std:: cout << "\n ------ Test 1 : ------ \n" << std::endl;
    try
    {
    Bureaucrat A;
    std::cout << CYAN "A : "<< A << RESET;
    }
    catch (const std::exception & e){
        std:: cout << YELLOW "Exeption caught : "<< RESET " \n";
        std::cout << e.what(); 
    }


    std:: cout << "\n ------ Test 2 : copy ------ \n" << std::endl;
    try
    {
    std:: cout << PURPLE "new bureaucrat : Tom, grade 149 \n "<< RESET;
    Bureaucrat B("Tom", 148);
    std:: cout << PURPLE "copy tom" << RESET "\n";
    Bureaucrat C(B);
    
    std:: cout << PURPLE "check copy" << RESET "\n";
    std::cout << CYAN "B : "<< B << RESET;
    std::cout << CYAN "C : "<< C << RESET;
    
    C.demote();
    std::cout << CYAN "C : "<< C << RESET;
    std::cout << CYAN "B : "<< B << RESET;
        
    }
    catch (const std::exception & e){
        std::cout << e.what(); 
    }

    std:: cout << "\n------ Test 3 : initial grade to low ------\n" << std::endl;
    try
    {
    Bureaucrat E("TomLow", 151);
    std::cout << CYAN << E << RESET "\n";
    }
    catch (const std::exception & e){
        std::cout << e.what(); 
    }
    
    std:: cout << "\n------ Test 4 : initial grade to high ------\n" << std::endl;
    try
    {
    Bureaucrat F("TomHigh", 0);
            std::cout << CYAN << F << RESET "\n";
    }
    catch (const std::exception & e){
        std::cout << e.what(); 
    }
    
    std:: cout << "\n------ Test 5 : Best workers get promotions ------\n" << std::endl;
        try
    {
    Bureaucrat A("Good", 150);
    Bureaucrat B("Great", 42);
    Bureaucrat C("Best", 2);

    A.promote();
    std::cout << CYAN << A << RESET;
    B.promote();
    std::cout << CYAN << B << RESET;
    C.promote();
    std::cout << CYAN << C << RESET;

    A.promote();
    std::cout << CYAN << A << RESET ;
    B.promote();
    std::cout << CYAN << B << RESET ;
    C.promote();
    std::cout << CYAN << C << RESET ;
    
    }
    catch (const std::exception & e){
        std::cout << e.what(); 
    }
    
    std:: cout << "\n------ Test 5 : Lazy workers are demoted ------\n" << std::endl;
    try
    {
    Bureaucrat A("Stupid", 149);
    Bureaucrat B("Lazy", 42);
    Bureaucrat C("Burned-Out", 1);

    A.demote();
    std::cout << CYAN << A << RESET;
    B.demote();
    std::cout << CYAN << B << RESET;
    C.demote();
    std::cout << CYAN << C << RESET;

    A.demote();
    std::cout << CYAN << A << RESET ;
    B.demote();
    std::cout << CYAN << B << RESET ;
    C.demote();
    std::cout << CYAN << C << RESET ;
    
    }
    catch (const std::exception & e){
        std::cout << e.what(); 
    }
    return 0;
}