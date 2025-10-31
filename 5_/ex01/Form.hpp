/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:16:18 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/31 12:25:37 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

// ===== INCLUDES =====
#include "colors.hpp"
#include <iostream>
#include <string>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class Form
{
private:
    std::string const & name;
    bool is_signed;
    int const grade_to_sign;
    int const grade_to_ex;

public:
    /* default constructor, copy constructor, affecation operator, default destructor */
    Form();
    Form(const Form &toCopy);
    Form &operator=(const Form &toCopy);
    ~Form();

    beSigned();
};
#endif