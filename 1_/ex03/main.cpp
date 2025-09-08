/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:19:48 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 16:49:30 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#define BACK_TO_POKEBALL 0

int main() {
    Weapon splash;
    std::cout << GREEN << "Splash's type is" << splash.getType() << RESET << std::endl;
    std::cout << "It's not very effective \n" << splash.getType() << RESET << std::endl;
    
    Weapon elec_skill = Weapon("Thunder Cage");
    std::cout << YELLOW << "Basic electric attack is " << elec_skill.getType() << RESET << std::endl;
    
    std::cout << "\n Pikachu, I choose you!" << std::endl;
    //HumanA pichu("Pika");
    HumanA pikachu("Pika", elec_skill);
    pikachu.attack();
    elec_skill.setType("Thunderbolt");
    pikachu.attack();

    std::cout << "\n Eevee ! Go !" << std::endl;
    HumanB eevee("Eevee");
    //HumanB jolteon("jolteon", elec_skill);
    eevee.attack();
    std::cout << "You give eevee a thunder stone" << std::endl;
    std::cout << YELLOW << "Your eevee is now a jolteon and learn elec_skill" << RESET << std::endl;
    eevee.setWeapon(elec_skill);
    eevee.attack();

    return (BACK_TO_POKEBALL);
}

// //main subject
// int main() {
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanA bob("Bob", club);
//         bob.attack();
//         club.setType("some other type of club");
//         bob.attack();
//     }
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanB jim("Jim");
//         jim.setWeapon(club);
//         jim.attack();
//         club.setType("some other type of club");
//         jim.attack();
//     }
//     return 0;
// }
