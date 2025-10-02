/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/02 17:10:23 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    _raw_bits = 0;
    //std::cout << BLUE << "Default constructor called !" << RESET << std::endl;
}

Fixed::Fixed(const int value) {
    int fix_bits = value << 8;
    _raw_bits = fix_bits;
    //std::cout << BLUE << "Int constructor called !" << RESET << std::endl;
}

Fixed::Fixed(const float fvalue) {
    float fix_bits = fvalue * (1 << _decimal_bits);
    _raw_bits = roundf(fix_bits);
    //std::cout << BLUE << "Float constructor called !" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &toCopy)
{
    *this = toCopy;
    //std::cout << YELLOW << "Copy constructor called." << RESET << std::endl;
}
Fixed::~Fixed() {
    //std::cout << BLUE << "Destructor called !" << RESET << std::endl;
}

// ==== OPERATOR OVERLOADS ====

Fixed   &Fixed::operator=(const Fixed &toCopy) {
    //std::cout << YELLOW << "Copy assignment operator= called." << RESET << std::endl;
    
    if(this != &toCopy)
    {
        this->_raw_bits = toCopy.getRawBits();
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
    Fixed res;
    res.setRawBits(this->_raw_bits - secondTerm.getRawBits());
    return res;
}
Fixed Fixed::operator*(const Fixed &secondTerm) const {
    Fixed res;
    
    long tmp = (long)this->_raw_bits * (long)secondTerm.getRawBits();
    
    res.setRawBits(tmp >> this->_decimal_bits );
    return res;
}
Fixed Fixed::operator/(const Fixed &secondTerm) const {
    Fixed res;

    float tmp = ((this->_raw_bits << this->_decimal_bits) / secondTerm.getRawBits());
    res.setRawBits(tmp);
    return res;
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
    this->_raw_bits = raw;
    //std::cout << RED << "setRawBits member function called" << RESET << std::endl;
    return;
}

float Fixed::toFloat( void ) const {
    float   result;
    
    result = (float) _raw_bits / (1 << 8);
    return (result);
}

int Fixed::toInt( void ) const {
    int result = 0;
    int bit_copy = 0;
    
    bit_copy = this->getRawBits();
    result = bit_copy >> 8;
    return (result);
}

