/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:18:51 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 14:53:03 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
    #define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "Colors.hpp"

//usage reference acr + simple a manipuler et on peut car weapon ne peut pas etre nul

class HumanA {
private:
    std::string _name;
    Weapon     &_weapon;

public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();

    void attack() const;
};

#endif
