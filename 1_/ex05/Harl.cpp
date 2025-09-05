/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:41:43 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/05 14:16:08 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    std::cout << BLUE << "Call Harl constructor.\n" << RESET << std::endl;
}


Harl::~Harl() {
    std::cout << BLUE << "\nCall Harl destructor." << RESET << std::endl;
}


void Harl::debug( void ){
    std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info( void ){
    std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning( void ){
    std::cout << RED << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month" << RESET << std::endl;    
}

void Harl::error( void ){
    std::cout << RED << BOLD << UNDERLINE << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;    
}

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*comments[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    
    for (int i = 0; i <= 3; i++) {
        if (level == levels[i]) {
            (this->*comments[i])();
            return;
        }
    }
    std::cout << BLUE << "No Sir, I didn't say anything, all is good. Have a Nice day !" << RESET << std::endl;
}


// void Harl::complain(const std::string level){

//     switch (level) {
//     case level == "DEBUG":
//         std::cout << "Monday";
//         break;
//     case "INFO":
//         std::cout << "Tuesday";
//         break;
//     case "WARNING":
//         std::cout << "Wednesday";
//         break;
//     case "ERROR":
//         std::cout << "Thursday";
//         break;
//     }  
// }
