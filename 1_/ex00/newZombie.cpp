/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:17:15 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 17:49:22 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
    Zombie  *zombiePtr;
    
    if (name.empty()){
        std::cout << "You need a name to raise a zombie from the dead !" << std::endl;
        return(NULL);
    }
    zombiePtr = new Zombie();
    zombiePtr->setName(name);
    return (zombiePtr);
}
