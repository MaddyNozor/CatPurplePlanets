/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:20:59 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/05 13:50:22 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl simon;
    std::string msg;
    
    
    msg = "DEBUG";
    std::cout << WHITE << "When Simon says " << msg << " he means :" << RESET << std::endl;
    simon.complain(msg);
    
    msg = "INFO";
    std::cout << WHITE << "\nWhen Simon says " << msg << " he means :" << RESET << std::endl;
    simon.complain(msg);
    
    msg = "WARNING";
    std::cout << WHITE << "\nWhen Simon says " << msg << " he means :" << RESET << std::endl;
    simon.complain(msg);
    
    msg = "ERROR";
    std::cout << WHITE << "\nWhen Simon says " << msg << " he means :" << RESET << std::endl;
    simon.complain(msg);
    
    msg = "something else"; // Dear corrector, try what you want to test here :)
    std::cout << WHITE << "\nWhen Simon says " << msg << " he means :" << RESET << std::endl;
    simon.complain(msg);
    return (EXIT_SUCCESS);
}
