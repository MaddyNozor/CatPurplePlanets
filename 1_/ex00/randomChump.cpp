/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:17:19 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/01 16:53:53 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name ) {
    Zombie  zChump;
    
    if (name.empty())
    {
        std::cout << "This Zombie has no name !" << std::endl;
        return;   
    }
    zChump.setName(name);
    zChump.announce();
    return;
}