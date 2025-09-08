/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:19:59 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 14:40:53 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
    #define WEAPON_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class Weapon {
private:
    std::string _type;

public:
    Weapon();
    Weapon(const std::string &type);
    ~Weapon();

    const std::string   &getType();
    void                setType(const std::string &type);
};

#endif
