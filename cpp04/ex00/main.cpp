#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Colours.hpp"
#include "Dog.hpp"
#include "Elephant.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new Elephant();
	std::cout << RED << "Testing basic things." << RESET << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << GREEN << "Basic tests done." << RESET << std::endl;
	std::cout << RED << "Testing wrong animal and cat now." << RESET << std::endl << std::endl;
	const WrongAnimal* nneta = new WrongAnimal();
	const WrongAnimal* eye = new WrongCat();
	std::cout << eye->getType() << std::endl;
	eye->makeSound();
	nneta->makeSound();

	std::cout << GREEN << "Wrong tests done." << RESET << std::endl << std::endl;

	delete meta;
	delete j;
	delete i;
	delete k;
	delete nneta;
	delete eye;
	return 0;
}
