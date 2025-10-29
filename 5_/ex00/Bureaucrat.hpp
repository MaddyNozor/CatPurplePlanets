/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:20:01 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/29 17:10:18 by mairivie         ###   ########.fr       */
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
    std::string const  _name;
    int           _rank;

public:
    Bureaucrat();
    Bureaucrat(std::string const & name, int rank);
    Bureaucrat(Bureaucrat const & toCopy);
    Bureaucrat const &operator=(Bureaucrat const & toCopy);
    ~Bureaucrat();
    
    std::string const  & getName() const;
    int const & getRank() const;
    int setRank(int const newRank);

class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "ERROR : Cannot set rank value : highest grade is 1.\n " ;
        }
};

class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() 
        {
            return ("ERROR : Cannot set rank value : lowest grade is 150.\n ");
        };
};

void promote();
void demote();

};

std::ostream & operator<<(std::ostream & s, Bureaucrat const & buro);

#endif