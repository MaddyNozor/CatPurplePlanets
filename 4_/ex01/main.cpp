/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:41 by mairivie          #+#    #+#             */
/*   Updated: 2025/10/13 15:05:02 by mairivie         ###   ########.fr       */
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
	std::cout << "----- Object a is a " << a->getType() << "\n--- ";
	a->makeSound();
    delete a;
    
	std::cout << std::endl;
    
	const Animal *b = new Dog();
	std::cout << "----- Object b is a " << b->getType() << "\n--- ";
	b->makeSound();
	delete b;
    
	std::cout << std::endl;
    
	const Animal *c = new Cat();
	std::cout << "----- Object c is a " << c->getType() << "\n--- ";
	c->makeSound();
	delete c;

	std::cout << std::endl;
    
    std::cout << "--- TESTS WITH ARRAY ---\nLook ! They're smart animals, some are dogs, some are cats. " << "\n";

    Animal *animals[6] = {new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Dog()};
	
    std::cout << " \nThey make some noises ! " << "\n";
	for (int i = 0; i < 6; i++)
		animals[i]->makeSound();

    std::cout << " \nToo much noise. Go home cats and dogs " << "\n";
	 for (int i = 0; i < 6; i++){
         delete animals[i];
        std::cout << "\n";
     }

	std::cout << std::endl;

	return EXIT_SUCCESS;
}