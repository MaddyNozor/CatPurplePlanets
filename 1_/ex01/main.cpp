/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:37:44 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/09 14:01:31 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int N = 10;
    std::string name = "Toto";
    
    Zombie  *horde = zombieHorde(N, name);
    if (horde == NULL) {
        std::cout << "Apocalypse delayed: cannote create zombies." << std::endl;
        return EXIT_FAIL;
    }
    std::cout << "Zombies ?! What do we want ?!" << std::endl;
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    
    delete[] horde;
    
    return (EXIT_SUCCESS);    
}