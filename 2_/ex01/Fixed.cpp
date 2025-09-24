/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/24 16:30:42 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << BLUE << "Default constructor called !" << RESET << std::endl;
    _raw_bits = 0;
}

Fixed::Fixed(const int value) {
    std::cout << BLUE << "Int constructor called !" << RESET << std::endl;
    this -> _raw_bits = value;
}

Fixed::Fixed(const float fvalue) {
    std::cout << BLUE << "Float constructor called !" << RESET << std::endl;
    float copy = fvalue / 2;
    copy ++;
}

Fixed::Fixed(const Fixed &toCopy)
{
    std::cout << YELLOW << "Copy constructor called." << RESET << std::endl;
    *this = toCopy;
}
Fixed::~Fixed() {
    std::cout << BLUE << "Destructor called !" << RESET << std::endl;
}

// ==== OPERATOR OVERLOADS ====

Fixed &Fixed::operator=(const Fixed &toCopy) {
    std::cout << YELLOW << "Copy assignment operator= called." << RESET << std::endl;
    
    if(this != &toCopy)
    {
        this->_raw_bits = toCopy.getRawBits();
        //this->_decimal_bits = toCopy._decimal_bits;
    }
    return *this;
}

std::ostream &operator<< (std::ostream &o, const Fixed &toInsert) {
    float   res;
    
   res = toInsert.toFloat();
   o << res; 
   return(o); 
   
}

// ==== METHODS ====

int Fixed::getRawBits(void) const {
    int result = 0;
    
    std::cout << GREEN << "getRawBits member function called" << RESET << std::endl;
    
    result = this->_raw_bits;
    return (result);
}


void Fixed::setRawBits( int const raw ) {
    std::cout << RED << "setRawBits member function called" << RESET << std::endl;

    this->_raw_bits = raw;
    return;
}

//pour les 2 methodes suivantes j'ai l'impression de 
// ne pas avoir droit a << car surcharge operateur
float Fixed::toFloat( void ) const {
    float   result;
    // int     tmp;
    
    result = (float) _raw_bits / (1 << 8);
    //result = tmp << 8 ;
    // droit a fonction puissance ? ( pow(2, n) pour 2^n )
    // protect contre les overflows ?
    return (result);
}

int Fixed::toInt( void ) const {
    int result = 0;
    // arrondi de  : (float * 2^deci_bits)
    // protect contre les overflows ?
    // = passer par un double pour check avant de cut en int
    return (result);
}


// #include <stdio.h>
// typedef int Fixed;

// #define FRACT_BITS 16
// #define FRACT_BITS_D2 8
// #define FIXED_ONE (1 << FRACT_BITS)
// #define INT2FIXED(x) ((x) << FRACT_BITS)
// #define FLOAT2FIXED(x) ((int)((x) * (1 << FRACT_BITS))) 
// #define FIXED2INT(x) ((x) >> FRACT_BITS)
// #define FIXED2DOUBLE(x) (((double)(x)) / (1 << FRACT_BITS))
// #define MULT(x, y) ( ((x) >> FRACT_BITS_D2) * ((y)>> FRACT_BITS_D2) )
