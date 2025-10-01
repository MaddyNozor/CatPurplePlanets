/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:05:15 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/01 13:04:25 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cstdlib>

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

int checkFloatArgument(int ac, char** av) {
   if (ac != 4)
      return EXIT_FAIL;
   if (atoi(av[1]) == 0)
      return EXIT_FAIL;
   if (atof(av[2]) == 0 || atof(av[3]) == 0)
      return EXIT_FAIL;
   return EXIT_SUCCESS;
}

int main(int ac, char** av) {
   if (checkFloatArgument(ac, av) == EXIT_FAIL) {
      std::cout << RED << INPUT_ERROR << RESET << std::endl;
      return EXIT_FAIL;
   }
   int i = atoi(av[1]);
   float f = atof(av[2]);
   float g = atof(av[3]);

   std::cout << i << std::endl;
   std::cout << f << std::endl;
   std::cout << g << std::endl;

   return EXIT_SUCCESS;
}