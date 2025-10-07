/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/07 12:04:29 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

// ===== INCLUDES =====
#include <iostream>
#include <string>
#include "colorsTools.hpp"
#include "ClapTrap.hpp"

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1
#define MAX_HP_CT 10
#define MAX_MANA_CT 10
#define MAX_HP_ST 100
#define MAX_MANA_ST 50
#define MAX_HP_FT 100
#define MAX_MANA_FT 100

// ===== CLASS DECLARATION =====

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& toCopy);
		virtual ~FragTrap();

		FragTrap& operator=(const FragTrap& toCopy);
	
		void	highFiveGuys();
		void	attack(const std::string& target);
		void	status() const;
};

//See ? No variables here.
//No new setters or getters of ClapTrap too.
//But I can still use them in .cpp ! Inheritance is Magic !

#endif