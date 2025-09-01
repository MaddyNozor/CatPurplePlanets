/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:29:34 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/01 17:44:08 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie  *Horde;

    if (N <= 0)
        return NULL;
    Horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        Horde[i].setName(name);
        Horde[i].announce();
    }

    return (Horde);
}