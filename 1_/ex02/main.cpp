/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:40:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/09 14:03:57 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <memory>
#include <iostream>
#include <iomanip>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "---------------------------------------------------------------" << std::endl;
    
    std::cout << std::setw(40) << "Memory address of the string variable: " << &string << std::endl;
    std::cout << std::setw(40) << "Memory address held by stringPTR: " << &stringPTR << std::endl;
    std::cout << std::setw(40) << "Memory address held by stringREF: " << &stringREF << std::endl;
    
    std::cout << "---------------------------------------------------------------" << std::endl;
    
    std::cout << std::setw(40) << "Value of the string variable: " << string << std::endl;
    std::cout << std::setw(40) << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << std::setw(40) << "Value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}