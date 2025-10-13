/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:41 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 14:46:19 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.hpp"

// int main(void) {
//     const Animal* meta = new Animal();
//     const Animal* b = new Dog();
//     const Animal* c = new Cat();
//     std::cout << b->getType() << " " << std::endl;
//     std::cout << c->getType() << " " << std::endl;
//     c->makeSound(); //will output the cat sound!
//     b->makeSound(); //will output the dat sound!
//     meta->makeSound(); //will output the default animal sound!

//     delete c;
//     delete b;
//     delete meta;
//     return EXIT_SUCCESS;
// }

int main()
{
    
    const Animal *a = new Animal();
	std::cout << "Object a is a " << a->getType() << std::endl;
	a->makeSound();
    
	std::cout << std::endl;
    
	const Animal *b = new Dog();
	std::cout << "Object b is a " << b->getType() << std::endl;
	b->makeSound();
    
	std::cout << std::endl;
    
	const Animal *c = new Cat();
	std::cout << "Object c is a " << c->getType() << std::endl;
	c->makeSound();
    
	std::cout << std::endl;
    
	const WrongAnimal *wa = new WrongAnimal();
	std::cout << "Object wa is a " << wa->getType() << std::endl;
	wa->makeSound();
    
	std::cout << std::endl;
    
	const WrongAnimal *wb = new WrongCat();
	std::cout << "Object wb is a " << wb->getType() << std::endl;
	wb->makeSound();
	
	std::cout << std::endl;

    delete a;
	delete b;
	delete c;
	delete wa;
    delete wb;

	return EXIT_SUCCESS;
}