/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:07 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/11 17:59:27 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << BLUE << "Default constructor called !" << RESET << std::endl;
    _raw_bits = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
    std::cout << YELLOW << "Copy constructor called." << RESET << std::endl;
    *this = toCopy;
}

Fixed &Fixed::operator=(const Fixed &toCopy)
{
    std::cout << YELLOW << "Copy assignment operator= called." << RESET << std::endl;
    
    if(this != &toCopy)
    {
        this->_raw_bits = toCopy.getRawBits();
        //this->_decimal_bits = toCopy._decimal_bits;
    }
    return *this;
}


Fixed::~Fixed() {
    std::cout << BLUE << "Destructor called !" << RESET << std::endl;
}

//const en fin de ft = rien de this ne sera modifie dans cette fonction 
//le programme a l'info que la methode n'a pas les droits d'ecriture = securite
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


// === Topo nombre virgule fixe ===

//Dex infos stockees principalements : 
// un int (dont la taille en nb de bits peut etre limitee pour raison de perf)
// un int constant qui donne le nombre de bits dedies a la partie decimale du nombre
//
//
//     Exemple:
//      Int raw = 00001101 00101000 (16 bits)
//      Int deci_bits = 8 (dont 8 pour la partie decimale)
//
//      on parle de forme 16-bit (ou Q8.8)

//    [Integer part] [Decimal part]
//    |      8 bits |       8 bits   |
//    --------------------------------
//    |  00001101   |   00101000     |
//    --------------------------------
//        13 (int value)      40 (raw_deci)
//                      
//      Decimal part value  = raw_deci x (1/ 2^deci_bits)
//                          = 40 x (1 / 2^8)
//                          = 40 x 1/256
//                          = 0.15625

//    => Value = 13.15625



// === Topo chiffres significatifs ===
// pi = 3,1415

// 1 chiffre = 3
// 2 chiffre = 3.1
// 3 chiffre = 3.14
// 4 chiffre = 3.142

// 123 456 789.00 = 9 chiffre significatif 
// 1.23456789 x 100 000 000 
// = 1.23456789 x 10x10x10x10x10x10x10x10x10 
// = 1.23456789 x 10^9

// 1.23 x 10^9 = 3 ch. significatifs
