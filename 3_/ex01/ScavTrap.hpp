/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:01 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 14:33:40 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

// ===== INCLUDES =====
#include <iostream>
#include <string>
#include "colorsTools.hpp"

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====

class ScavTrap
{
    private:
    
    
    public:
    /* constructor default, copy, affecation operator, destructor */
    ScavTrap();
    ScavTrap(const ScavTrap &toCopy);
    ScavTrap &operator=(const ScavTrap &toCopy);
    ~ScavTrap();
    
    
};

#endif