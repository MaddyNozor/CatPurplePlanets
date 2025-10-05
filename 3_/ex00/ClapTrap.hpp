/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:26:48 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/03 16:39:54 by mairivie         ###   ########.fr       */
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
#define MAX_HP 10
#define MAX_MANA 10


// ===== CLASS DECLARATION =====
class ClapTrap
{
private:
    std::string _name;
    int         _hitPoint;
    int         _manaPoint;
    int         _attackDamage;
public:
    /* constructor default, copy, affecation operator, destructor */
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &toCopy);
    ClapTrap &operator=(const ClapTrap &toCopy);
    ~ClapTrap();

    //=== GETTERS ===
    std::string    getName(void) const;
    int            getHitPoint(void) const;
    int            getManaPoint(void) const;
    int            getAttackDamage(void) const;

    //=== SETTERS ===
    void    setName(const std::string newName);
    void    setHitPoint(const int newValue);
    void    setManaPoint(const int newValue);
    void    setAttackDamage(const int newValue);

    //=== MEMBER FUNCTIONS ===
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    status(void) const;
};

#endif