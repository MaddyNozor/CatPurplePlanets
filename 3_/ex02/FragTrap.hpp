/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 14:35:07 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

// ===== INCLUDES =====
#include <iostream>
#include <string>
#include "colorsTools.hpp"

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class FragTrap
{
private:


public:
    /* constructor default, copy, affecation operator, destructor */
    FragTrap();
    FragTrap(const FragTrap &toCopy);
    FragTrap &operator=(const FragTrap &toCopy);
    ~FragTrap();


};
#endif