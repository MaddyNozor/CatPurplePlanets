/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:56:29 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 09:09:05 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

// ===== INCLUDES =====
#include "colors.hpp"
#include <iostream>
#include <string>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class WrongAnimal
{
    protected:
        std::string _type;

    public:
        /* default constructor, copy constructor, affecation operator, default destructor */
        WrongAnimal();
        WrongAnimal(const WrongAnimal &toCopy);
        WrongAnimal &operator=(const WrongAnimal &toCopy);
        virtual ~WrongAnimal();

        void    makeSound( void ) const;

};
#endif