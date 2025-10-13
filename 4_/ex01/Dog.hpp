/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:37 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 12:21:03 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

// ===== INCLUDES =====
#include "colors.hpp"
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class Dog : public Animal 
{
    private: 
        Brain* _brain;
    public:
        /* default constructor, copy constructor, affecation operator, default destructor */
        Dog();
        Dog(const Dog &toCopy);
        Dog &operator=(const Dog &toCopy);
        ~Dog();

        virtual void    makeSound( void ) const;
};
#endif