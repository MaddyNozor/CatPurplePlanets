/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:25 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/10 12:40:59 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

// ===== INCLUDES =====
#include "colors.hpp"
#include <iostream>
#include <string>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class Animal
{
private:


public:
    /* default constructor, copy constructor, affecation operator, default destructor */
    Animal();
    Animal(const Animal &toCopy);
    Animal &operator=(const Animal &toCopy);
    virtual ~Animal();


};
#endif