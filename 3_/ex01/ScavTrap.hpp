/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:27:01 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/06 14:13:29 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

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

// ===== CLASS DECLARATION =====

class ScavTrap : public ClapTrap{

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& toCopy);
		virtual ~ScavTrap();

		ScavTrap& operator=(const ScavTrap& toCopy);
	
		void	guardGate();
		void	attack(const std::string& target);
		void	status() const;
};

//See ? No new setters or getters here
//I can still use them (ClapTrap's) in .cpp

#endif