/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:16:13 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/31 12:21:10 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {
std::cout << BLUE << "Call Form default constructor." << RESET << std::endl;
}

Form::Form(const Form &toCopy)
{
    *this = toCopy;
}

Form &Form::operator=(const Form &toCopy)
{
    if(this != &toCopy)
    {

    }
    return *this;
}

Form::~Form() {
std::cout << BLUE << "Call Form default destructor." << RESET << std::endl;
}
