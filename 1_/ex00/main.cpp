/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:16:27 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/01 17:20:50 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie  *RoberTombe;
    
    std::cout << YELLOW << "\nMain: Roberto is newZombie [Heap]" << RESET << std::endl;
    RoberTombe = newZombie("Roberto"); //
    RoberTombe->announce();
    delete RoberTombe;
    
    std::cout << YELLOW << "\nMain: Rodrigo is randomChump [Stack]" << RESET << std::endl;
    randomChump("Rodrigo");
    
    std::cout << YELLOW << "\nMain: Test Empty Name" << RESET << std::endl;
    randomChump("");
    
    std::cout << YELLOW << "\nMain: What happens if Z raised in main ?" << RESET << std::endl;
    Zombie  test("Bob");
    
    std::cout << YELLOW << "\nEnd of Main." << RESET << std::endl;
    return EXIT_SUCCESS;
}