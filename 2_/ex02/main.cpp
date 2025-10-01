/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:15 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/01 18:16:45 by mairivie         ###   ########.fr       */
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
   if ((atof(av[2]) == 0 && ((tmp = av[1]) != "0"))
   || (atof(av[3]) == 0 && ((tmp = av[1]) != "0")))
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
   
   float B = atof(av[2]);
   std::cout << "\nB  (float) = " << B << std::endl;
   Fixed b ((float)atof(av[2]));
   std::cout << "Fixed b = " << b << std::endl;
   
   float C = (float)atof(av[3]);
   std::cout << "\nC  (float) = " << C << std::endl;
   Fixed c ((float)atof(av[3]));
   std::cout << "Fixed c = " << c << std::endl;

   
   std::cout << "\nDefault = 0" << std::endl;
   Fixed d;
   std::cout << "Fixed d = " << d << std::endl;

   std::cout << "\nCopy from c = " << c << std::endl;
   Fixed e(c);
   std::cout << "Fixed e = " << e << std::endl;
   
    std::cout << GREEN <<"\n=== Fixed Arithmetic ==="<< RESET << std::endl;
    Fixed Add = b + a;
    Fixed Rem = c - b;
    Fixed Mult = b * a;
    Fixed Div = a / b;
    Fixed Crash = b / 0;
    

    std::cout << b <<" + "<< a <<" = " << Add << " NB: B + A = " << (B+A) << std::endl;
      std::cout << c <<" - "<< b <<" = " << Rem << " NB: C - B = " << (C-B) <<  std::endl;
      std::cout << b <<" * "<< a <<" = " << Mult << std::endl;
     std::cout << a <<" / "<< b <<" = " << Div << std::endl;
      std::cout << b <<" / "<< "0" <<" = " << Crash << std::endl;

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
   std::cout << "b = " << b <<  "& c = " << c << std::endl;
    std::cout << "min(b,c) = " << Fixed::min(b,c) << std::endl;
    std::cout << "max(b,c) = " << Fixed::max(b,c) << std::endl;

   return EXIT_SUCCESS;
}

/*#include "Fixed.hpp"

int main(void)
{
    std::cout << "=== Constructors ===" << std::endl;
    Fixed a;                
    Fixed b(10);            
    Fixed c(42.42f);        
    Fixed d(b);             

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "\n=== Arithmetic ===" << std::endl;
    Fixed e = b + c;
    Fixed f = c - b;
    Fixed g = b * c;
    Fixed h = c / b;

    std::cout << "b + c = " << e << std::endl;
    std::cout << "c - b = " << f << std::endl;
    std::cout << "b * c = " << g << std::endl;
    std::cout << "c / b = " << h << std::endl;

    std::cout << "\n=== Comparison ===" << std::endl;
    std::cout << "b > c ? " << (b > c) << std::endl;
    std::cout << "b < c ? " << (b < c) << std::endl;
    std::cout << "b == d ? " << (b == d) << std::endl;

    std::cout << "\n=== Increment / Decrement ===" << std::endl;
    Fixed x(5.5f);
    std::cout << "x       = " << x << std::endl;
    std::cout << "++x     = " << ++x << std::endl;  // pre-increment
    std::cout << "x++     = " << x++ << std::endl;  // post-increment
    std::cout << "x after = " << x << std::endl;

    std::cout << "\n=== Min / Max ===" << std::endl;
    Fixed y(2.5f), z(9.75f);
    std::cout << "min(y,z) = " << Fixed::min(y,z) << std::endl;
    std::cout << "max(y,z) = " << Fixed::max(y,z) << std::endl;

    return 0;
}*/
