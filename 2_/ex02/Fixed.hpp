/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:10 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/24 16:26:33 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
#define Fixed_HPP

// ===== COLORS & LAYOUT =====
#define RESET "\033[0m"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLACK "\033[30m"
#define WHITE "\033[37m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define REVERSED "\033[7m"

#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

// ===== INCLUDES =====
#include <iostream>
#include <string>
#include <cmath>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS =====

class Fixed
{
private:
    int                 _raw_bits;
    static const int    _decimal_bits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float fvalue);
    Fixed(const Fixed &toCopy);
    ~Fixed();
    
    Fixed   &operator=(const Fixed &toCopy);
    
    int getRawBits(void) const;
    void setRawBits( int const raw );
    
    float toFloat( void ) const;
    int toInt( void ) const;
    
};

std::ostream    &operator<< (std::ostream &o, const Fixed &toInsert);

bool            operator>(const Fixed &a, const Fixed &b);
bool            operator<(const Fixed &a, const Fixed &b);
bool            operator>=(const Fixed &a, const Fixed &b);
bool            operator>=(const Fixed &a, const Fixed &b);
bool            operator==(const Fixed &a, const Fixed &b);
bool            operator!=(const Fixed &a, const Fixed &b);


#endif