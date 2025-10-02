/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:15 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/02 16:32:22 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
        
    a = Fixed( 1234.4321f );
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
    return 0;
}

// #include <cstdlib>
// #include <iomanip>
// #include <cstring>
// #define INPUT_ERROR "Invalid input argument !\n Format is ./fixed [int] [float] [float]\n"

// int checkAv(int ac, char** av) {
//    if (ac != 4)
//       return EXIT_FAIL;
//    std::string tmp;
//    if (atoi(av[1]) == 0 && ((tmp = av[1]) != "0"))
//       return EXIT_FAIL;
//    if ((atof(av[2]) == 0 && ((tmp = av[1]) != "0"))
//    || (atof(av[3]) == 0 && ((tmp = av[1]) != "0")))
//       return EXIT_FAIL;
//    return EXIT_SUCCESS;
// }

// int main(int ac, char** av) {
//    if (checkAv(ac, av) == EXIT_FAIL) {
//       std::cout << RED << INPUT_ERROR << RESET << std::endl;
//       return EXIT_FAIL;
//    }
//    std::cout << GREEN <<"\n=== Construction ==="<< RESET << std::endl;
//    int A = atoi(av[1]);
//    std::cout << "A (int) = " << A << std::endl;
//    Fixed a (atoi(av[1]));
//    std::cout << "Fixed a = " << a << std::endl;
   
//     double B = atof(av[2]);
//    std::cout << "\nB  (float) = " << B << std::endl;
//    Fixed b ((float)atof(av[2]));
//    std::cout << "Fixed b = " << b << std::endl;
   
//    float C = (float)atof(av[3]);
//    std::cout << "\nC  (float) = " << C << std::endl;
//    Fixed c ((float)atof(av[3]));
//    std::cout << "Fixed c = " << c << std::endl;

   
//    std::cout << "\nDefault = 0" << std::endl;
//    Fixed d;
//    std::cout << "Fixed d = " << d << std::endl;

//    std::cout << "\nCopy from c = " << c << std::endl;
//    Fixed e(c);
//    std::cout << "Fixed e = " << e << std::endl;

//    return EXIT_SUCCESS;
// }
