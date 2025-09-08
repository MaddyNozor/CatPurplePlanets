/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:19:41 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 14:41:16 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
    #define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "Colors.hpp"

//usage pointeur car B peut ne pas avoir d'arme (== NULL)

class HumanB {
private:
    std::string _name;
    Weapon     *_weapon;

public:
    HumanB(const std::string &name);
    ~HumanB();

    void setWeapon(Weapon &weapon);
    void attack() const;
};

#endif
