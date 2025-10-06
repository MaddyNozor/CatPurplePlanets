/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:51 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/06 18:22:34 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cstring>

int main(void) {
    std::cout << PURPLE "In an abandoned factory, a mad scientist builds robots." RESET << std::endl ;
    ClapTrap rob("Frank");
	ClapTrap bot("");
	ClapTrap toto;
    rob.status(); bot.status(); toto.status();

	std::cout << PURPLE "\nSorry robots, forgot the names. Bot, you're Enstein and you are toto" RESET << std::endl ;
    bot.renameAnonymous("Einstein");
	toto.renameAnonymous("Toto");
    rob.status(); bot.status(); toto.status();

	std::cout << PURPLE "\nFrank, attack this box !" RESET << std::endl ;
	rob.attack("a random box");
	rob.attack("a random box again");
    rob.status(); bot.status(); toto.status();

	std::cout << PURPLE "\nEinstein, help him !" RESET << std::endl ;
	while (rob.getManaPoint() > 0) {
		rob.attack("a random box");
		bot.attack("the same box");
	}
    rob.status(); bot.status(); toto.status();

	std::cout << PURPLE "\nFrank, why do you stop ?!" RESET << std::endl ;
	rob.attack("a random box");


    std::cout << PURPLE "\nDamn, Frank and Einstein takes an arroe in the knee! 8 DMG each." RESET << std::endl ;
    rob.takeDamage(8);
    bot.takeDamage(8);
    rob.status(); bot.status(); toto.status();

    std::cout << PURPLE "\nTime to repair yourself ! These spare parts will restore 10 HP. " RESET << std::endl ;
    rob.beRepaired(10);
    bot.beRepaired(10);
    toto.beRepaired(10);
    rob.status(); bot.status(); toto.status();

    std::cout << PURPLE "\nFinaly don't need you anymore. I cut the power " RESET << std::endl ;

    return EXIT_SUCCESS;
}
