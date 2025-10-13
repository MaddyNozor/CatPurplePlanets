/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:56:35 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 08:57:03 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

// ===== INCLUDES =====
#include "colors.hpp"
#include <iostream>
#include <string>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class WrongCat
{
private:


public:
    /* default constructor, copy constructor, affecation operator, default destructor */
    WrongCat();
    WrongCat(const WrongCat &toCopy);
    WrongCat &operator=(const WrongCat &toCopy);
    ~WrongCat();


};
#endif