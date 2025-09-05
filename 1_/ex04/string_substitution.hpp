/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_substitution.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:49:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/05 15:00:22 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef string_substitution_HPP
#define string_substitution_HPP

// ===== INCLUDES =====
#include <iostream>
#include <string>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

#define RESET "\033[0m"
#define RED "\033[31m"

// ===== FUNCTION DECLARATION =====

std::string find_and_substitute_s1_by_s2(std::string &content, std::string &s1, std::string &s2);

#endif