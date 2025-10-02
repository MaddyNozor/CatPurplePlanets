/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:15 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/02 16:57:05 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cstdlib>
#include <iomanip>
#include <cstring>

// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// return 0;
// }

#define INPUT_ERROR "Invalid input argument !\n Format is ./fixed [int] [float] [float]\n"

int checkAv(int ac, char** av) {
   if (ac != 4)
      return EXIT_FAIL;
   std::string tmp;
   if (atoi(av[1]) == 0 && ((tmp = av[1]) != "0"))
      return EXIT_FAIL;
   if ((atof(av[2]) == 0 && ((tmp = av[2]) != "0"))
   || (atof(av[3]) == 0 && ((tmp = av[3]) != "0")))
      return EXIT_FAIL;
   return EXIT_SUCCESS;
}

int main(int ac, char** av) {
   if (checkAv(ac, av) == EXIT_FAIL) {
      std::cout << RED << INPUT_ERROR << RESET << std::endl;
      return EXIT_FAIL;
   }
   std::cout << GREEN <<"\n=== Construction ==="<< RESET << std::endl;
   int A = atoi(av[1]);
   std::cout << "A (int) = " << A << std::endl;
   Fixed a (atoi(av[1]));
   std::cout << "Fixed a = " << a << std::endl;
   
   double B = (double)atof(av[2]);
   std::cout << "\nB  (double) = " << av[2] << std::endl;
   Fixed b ((float)atof(av[2]));
   std::cout << "Fixed b = " << b << std::endl;
   
   float C = (float)atof(av[3]);
   std::cout << "\nC  (float) = " << C << std::endl;
   Fixed c ((float)atof(av[3]));
   std::cout << "Fixed c = " << c << std::endl;

   
   std::cout << "\nDefault = 0" << std::endl;
   Fixed d;
   std::cout << "Fixed d = " << d << std::endl;

   std::cout << "\ne = Copy from c = " << c << std::endl;
   Fixed e(c);
   std::cout << "Fixed e = " << e << std::endl;
   
    std::cout << GREEN <<"\n=== Fixed Arithmetic ==="<< RESET << std::endl;
    Fixed Add = b + a;
    Fixed Rem = c - b;
    Fixed Mult = c * a;
    Fixed Div = c / b;
    Fixed Crash = b / a;
    

    std::cout << b <<" + "<< a <<" = " << Add << std::setw(30) << " with floats :  " << (B+A) << std::endl;
      std::cout << c <<" - "<< b <<" = " << Rem << std::setw(30) << "  with floats :   " << (C-B) <<  std::endl;
      std::cout << c <<" * "<< a <<" = " << Mult << std::setw(30) << " with floats :  " << (C*A) << std::endl;
     std::cout << c <<" / "<< b <<" = " << Div << std::setw(30) << " with floats :  " << (C/B) << std::endl;
      std::cout << b <<" / "<< a <<" = " << Crash << std::setw(30) << "  with floats :  " << (B/A) << std::endl;

    std::cout <<  GREEN <<"\n=== Comparison ==="<< RESET << std::endl;
    std::cout << b <<" > "<< a <<" = " << ((b > a) ? "OK " : "NOPE  ") << std::endl;
    std::cout << b <<" < "<< c <<" = " << ((b < c) ? "OK " : "NOPE  ")  << std::endl;
    std::cout << c <<" >= "<< a <<" = " << ((c >= a) ? "OK " : "NOPE  ")  << std::endl;
    std::cout << c <<" <= "<< a <<" = " << ((c <= a) ? "OK " : "NOPE  ")  << std::endl;
    std::cout << c <<" <= "<< e <<" = " << ((c <= e) ? "OK " : "NOPE  ")  << std::endl;
    std::cout << c <<" == "<< e <<" = " << ((c == e) ? "OK " : "NOPE  ")  << std::endl;
    std::cout << c <<" != "<< e <<" = " << ((c != e) ? "OK " : "NOPE ")  << std::endl;

   std::cout <<  GREEN <<"\n=== Increment / Decrement ==="<< RESET << std::endl;

    std::cout << "c = " << c << std::endl;
    std::cout << "++c = " << ++c << std::endl;
    std::cout << "c++ = " << c++ << std::endl;
    std::cout << "c after = " << c << std::endl;

   std::cout <<  GREEN <<"\n=== Min / Max ==="<< RESET << std::endl;
   std::cout << "b = " << b << "\nc = " << c << "\ne = " << e << std::endl;
   std::cout << "max(e,c) = " << Fixed::max(e,c) << std::endl;
   std::cout << "min(e,c) = " << Fixed::min(e,c) << std::endl;
   std::cout << "min(b,c) = " << Fixed::min(b,c) << std::endl;
    std::cout << "max(b,c) = " << Fixed::max(b,c) << "\n\n" << std::endl;

   return EXIT_SUCCESS;
}


