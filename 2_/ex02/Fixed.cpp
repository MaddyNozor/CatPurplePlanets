/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/25 15:38:45 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << BLUE << "Default constructor called !" << RESET << std::endl;
    _raw_bits = 0;
}

Fixed::Fixed(const int value) {
    int fix_bits = value << 8;
    _raw_bits = fix_bits;
    
    std::cout << BLUE << "Int constructor called !" << RESET << std::endl;
}

Fixed::Fixed(const float fvalue) {
    float fix_bits = fvalue * (1 << _decimal_bits);
    _raw_bits = roundf(fix_bits);
    std::cout << BLUE << "Float constructor called !" << RESET << std::endl;
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

Fixed   &Fixed::operator=(const Fixed &toCopy) {
    std::cout << YELLOW << "Copy assignment operator= called." << RESET << std::endl;
    
    if(this != &toCopy)
    {
        this->_raw_bits = toCopy.getRawBits();
        //this->_decimal_bits = toCopy._decimal_bits;
    }
    return *this;
}

bool    Fixed::operator>(const Fixed &toCompare) const {
    if (this->_raw_bits > toCompare.getRawBits())
        return true;
    return false;
}
bool    Fixed::operator<(const Fixed &toCompare) const {
    if (this->_raw_bits < toCompare.getRawBits())
        return true;
    return false;
}
bool    Fixed::operator>=(const Fixed &toCompare) const {
    return (this->_raw_bits >= toCompare.getRawBits());
}
bool    Fixed::operator<=(const Fixed &toCompare) const {
    return (this->_raw_bits <= toCompare.getRawBits());
}
bool    Fixed::operator==(const Fixed &toCompare) const {
    return (this->_raw_bits == toCompare.getRawBits());
}
bool    Fixed::operator!=(const Fixed &toCompare) const {
    return (this->_raw_bits != toCompare.getRawBits());
}

Fixed Fixed::operator+(const Fixed &secondTerm) const {
    Fixed   result;

    int temp = (this->_raw_bits + secondTerm.getRawBits());
    result.setRawBits(temp);
    return result;
}
Fixed Fixed::operator-(const Fixed &secondTerm) const {
    Fixed   result;

    int temp = (this->_raw_bits - secondTerm.getRawBits());
    result.setRawBits(temp);
    return result;
}
Fixed Fixed::operator*(const Fixed &secondTerm) const {
    float ftemp = (this->toFloat()) * (secondTerm.toFloat());
    Fixed result(ftemp);
    return result;
}
Fixed Fixed::operator/(const Fixed &secondTerm) const {
    float ftemp = (this->toFloat()) / (secondTerm.toFloat());
    Fixed result(ftemp);
    return result;
}

Fixed& Fixed::operator++() {
	this->_raw_bits += 1;
	return *this;
}

Fixed& Fixed::operator--() {
	this->_raw_bits -= 1;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);
	this->_raw_bits += 1;
	return temp;
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);
	this->_raw_bits -= 1;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a > b)
        return b;
    return a;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    if (a > b)
        return b;
    return a;
}
Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a < b)
        return b;
    return a;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    if (a < b)
        return b;
    return a;
}

std::ostream &operator<< (std::ostream &outStream, const Fixed &toInsert) {
    float   res = toInsert.toFloat();
   outStream << res; 
   return(outStream); 
}

// ==== METHODS ====

int Fixed::getRawBits(void) const {
    int result = 0;
    
    //std::cout << GREEN << "getRawBits member function called" << RESET << std::endl;
    
    result = this->_raw_bits;
    return (result);
}


void Fixed::setRawBits( int const raw ) {
    std::cout << RED << "setRawBits member function called" << RESET << std::endl;

    this->_raw_bits = raw;
    return;
}

float Fixed::toFloat( void ) const {
    float   result;
    
    result = (float) _raw_bits / (1 << 8);
    //result = tmp << 8 ;
    // droit a fonction puissance ? ( pow(2, n) pour 2^n )
    // protect contre les overflows ?
    return (result);
}

int Fixed::toInt( void ) const {
    int result = 0;
    int bit_copy = 0;
    bit_copy = this->getRawBits();
    result = bit_copy >> 8;
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
