/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:16:27 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/01 12:04:20 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    std::cout << "NewZombie after this:" << std::endl;
    newZombie("Roberto");
    std::cout << "NewZombie after this:" << std::endl;
    randomChump("Rodrigo");
    std::cout << "End of Main" << std::endl;
    return EXIT_SUCCESS;
}