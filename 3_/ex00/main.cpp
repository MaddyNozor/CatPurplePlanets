/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:51 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 14:26:52 by mairivie         ###   ########.fr       */
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
	ClapTrap jDoe;
    rob.status(); bot.status(); jDoe.status();

    std::cout << PURPLE "\nSorry robots, forgot the names. Bot, you're Enstein, jDoe, be like Frank" RESET << std::endl ;
    bot.setName("Einstein");
    jDoe = rob;
    rob.status(); bot.status(); jDoe.status();
    
    std::cout << PURPLE "\n In this action, jDoe loss some HP and Mana. Poor jDoe." RESET << std::endl ;
    jDoe.setHitPoint(7);
    jDoe.setManaPoint(0);
    jDoe.status(); rob.status();

    std::cout << PURPLE "\n Too connfusing, jDoe change your name" RESET << std::endl ;
    jDoe.setName("John Doe");
    jDoe.status(); rob.status();

    std::cout << PURPLE "\nDamn, jDoe and Einstein takes an arroe in the knee! 8 DMG each." RESET << std::endl ;
    jDoe.takeDamage(8);
    bot.takeDamage(8);
    rob.status(); bot.status(); jDoe.status();

    std::cout << PURPLE "\nEinstein is mad and try to breack the arrow " RESET << std::endl ;
    bot.attack("arrow");
    bot.status();

    std::cout << PURPLE "\nTime to repair yourself ! These spare parts will restore 10 HP. " RESET << std::endl ;
    rob.beRepaired(10);
    bot.beRepaired(10);
    jDoe.beRepaired(10);
    rob.status(); bot.status(); jDoe.status();

    std::cout << PURPLE "\nFinaly don't need you anymore. I cut the power " RESET << std::endl ;


    return EXIT_SUCCESS;
}

/*int main(void) {
	std::cout << PURPLE "Our heroes Banjo and Kazooie are fighting the horrible Gruntilda atop of her castle!" RESET << std::endl;

	ClapTrap Banjo("Banjo");
	ClapTrap Kazooie("Kazooie");
	ClapTrap Gruntilda("Gruntilda");

	std::cout << std::endl;

	std::cout << PURPLE "Let's give our heroes the strength necessary to fight!" RESET << std::endl;

	Banjo.setAttackDamage(10);
	Kazooie.setAttackDamage(2);
	
	std::cout << std::endl;

	std::cout << PURPLE "Now our heroes attack!" RESET << std::endl;
	Banjo.attack(Gruntilda.getName());
	Gruntilda.takeDamage(Banjo.getAttackDamage());
	Kazooie.attack(Gruntilda.getName());
	Gruntilda.takeDamage(Kazooie.getAttackDamage());

	std::cout << std::endl;

	std::cout << PURPLE "Wait... Gruntilda is healing herself!" RESET << std::endl;
	Gruntilda.beRepaired(42);

	std::cout << std::endl;

	std::cout << PURPLE "Watch out! Gruntilda is preparing a powerful spell!" RESET << std::endl;
	Gruntilda.setAttackDamage(42);
	Gruntilda.attack(Banjo.getName());
	Banjo.takeDamage(Gruntilda.getAttackDamage());

	std::cout << std::endl;

	std::cout << PURPLE "Noooo Banjo, stay with us, we need you!" RESET << std::endl;

	std::cout << std::endl;

	Gruntilda.attack(Banjo.getName());
	Banjo.takeDamage(Gruntilda.getAttackDamage());
	std::cout << RED "Gruntilda, how dare you attack when Banjo is already dead ?!" RESET << std::endl;

	std::cout << std::endl;
	
	std::cout << GREEN "The witch is now super tired..." RESET << std::endl;
	Gruntilda.setManaPoint(0);

	std::cout << std::endl;

	std::cout << GREEN "Banjo with the jinjo power is getting a power-up with Kazooie, HE'S COMING BACK TO LIFE!" RESET << std::endl;
	Banjo.beRepaired(100);
	Banjo.setManaPoint(100);
	Banjo.setAttackDamage(100);
	Kazooie.setHitPoint(100);
	Banjo.attack(Gruntilda.getName());
	Gruntilda.takeDamage(Banjo.getAttackDamage());
	
	std::cout << std::endl;

	std::cout << BLUE "It's over for you Gruntilda, begone!" RESET << std::endl;

	std::cout << std::endl;

	Gruntilda.attack(Banjo.getName());
	Gruntilda.beRepaired(100);
	std::cout << RED "It's useless Gruntilda, you don't even have enough energy to walk" RESET << std::endl;

	std::cout << std::endl;

	std::cout << GREEN "Congratulations to our heroes Banjo and Kazooie! The witch is now defeated!" RESET << std::endl;
	
	std::cout << std::endl;

	return 0;
}*/
