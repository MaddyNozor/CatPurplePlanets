/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:10 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 14:27:11 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    std::cout << PURPLE "The factory doors creak open... a new model arrives!" RESET << std::endl;

    ClapTrap basic("CL4P-Basic");
    ScavTrap guard("SC4V-Guard");
    FragTrap cheer("FR4G-Cheerleader");

    std::cout << PURPLE "\nStatus report:" RESET << std::endl;
    basic.status();
    guard.status();
    cheer.status();

    std::cout << PURPLE "\nRobots, ATTACK!" RESET << std::endl;
    basic.attack("a trash can");
    guard.attack("a wandering rat");
    cheer.attack("a vending machine");

    std::cout << PURPLE "\nSC4V-Guard goes into defense mode..." RESET << std::endl;
    guard.guardGate();

    std::cout << PURPLE "\nFR4G-Cheerleader tries to boost morale!" RESET << std::endl;
    cheer.highFiveGuys();

    std::cout << PURPLE "\nOuch! FR4G takes 50 damage..." RESET << std::endl;
    cheer.takeDamage(50);
    cheer.status();

    std::cout << PURPLE "\nBut FR4G repairs himself using spare screws!" RESET << std::endl;
    cheer.beRepaired(30);
    cheer.status();

    std::cout << PURPLE "\nEnd of experiment. Factory powers down..." RESET << std::endl;

    return EXIT_SUCCESS;
}
