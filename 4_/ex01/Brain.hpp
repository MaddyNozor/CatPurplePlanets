/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:06:36 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 14:49:48 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

// ===== INCLUDES =====
#include "colors.hpp"
#include <iostream>
#include <string>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class Brain
{
	protected :
		std::string _ideas[100];
    public:
        /* default constructor, copy constructor, affecation operator, default destructor */
        Brain();
        Brain(const Brain &toCopy);
        Brain &operator=(const Brain &toCopy);
        ~Brain();


};
#endif