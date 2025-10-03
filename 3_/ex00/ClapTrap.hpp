/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:48 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 14:32:54 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

// ===== INCLUDES =====
#include <iostream>
#include <string>
#include "colorsTools.hpp"

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class ClapTrap
{
private:


public:
    /* constructor default, copy, affecation operator, destructor */
    ClapTrap();
    ClapTrap(const ClapTrap &toCopy);
    ClapTrap &operator=(const ClapTrap &toCopy);
    ~ClapTrap();


};

#endif