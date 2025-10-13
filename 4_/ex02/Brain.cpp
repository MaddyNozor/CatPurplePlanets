/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:06:39 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 14:52:37 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
std::cout << CYAN << "Call Brain default constructor." << RESET << std::endl;
}

Brain::Brain(const Brain &toCopy)
{
    *this = toCopy;
}

Brain &Brain::operator=(const Brain &toCopy)
{
    if(this != &toCopy)
    {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = toCopy._ideas[i];
		}
    }
    return *this;
}

Brain::~Brain() {
std::cout << CYAN << "Call Brain default destructor." << RESET << std::endl;
}
