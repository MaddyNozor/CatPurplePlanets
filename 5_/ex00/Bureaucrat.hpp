/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:20:01 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/27 18:33:46 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

// ===== INCLUDES =====
#include "colors.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class Bureaucrat
{
private:
    const std::string   _name;
    int                 _rank;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &toCopy);
    Bureaucrat &operator=(const Bureaucrat &toCopy);
    ~Bureaucrat();

class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return ("Cannot set rank value : highest grade is 1.");
        };
};

class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return ("Cannot set rank value : lowest grade is 150.");
        };
};

void checkRank(const int newvalue) const;

};

#endif