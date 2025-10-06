/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:54 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/06 14:36:29 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    std::cout << PURPLE "In the same abandoned factory, the scientist decides to build *advanced* robots..." RESET << std::endl;

    ClapTrap basic("CL4P-Basic");
    ScavTrap guard("SC4V-Guard");
    ScavTrap boss("B0SS-Trap");

    std::cout << PURPLE "\nStatus report:" RESET << std::endl;
    basic.status();
    guard.status();
    boss.status();

    std::cout << PURPLE "\nThe scientist orders the robots to attack!" RESET << std::endl;
    basic.attack("a rusty barrel");
    guard.attack("a shiny chest");
    boss.attack("the scientist himself!?");

    std::cout << PURPLE "\nSC4V-Guard activates his special ability..." RESET << std::endl;
    guard.guardGate();

    std::cout << PURPLE "\nB0SS-Trap takes heavy damage but tries to repair..." RESET << std::endl;
    boss.takeDamage(42);
    boss.status();
    boss.beRepaired(20);
    boss.status();

    std::cout << PURPLE "\nB0SS-Trap tries to repair again..." RESET << std::endl;
    boss.beRepaired(40);
    boss.status();
    
    std::cout << PURPLE "\nOVERLOAD ! The factory is collapsing! Robots must shut down..." RESET << std::endl;

    return EXIT_SUCCESS;
}