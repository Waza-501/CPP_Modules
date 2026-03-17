#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Cat*	Timmy = new Cat();
	std::cout << Timmy->getType() << std::endl;
	// const Animal* Charlie = new Animal();
	delete Timmy;
	return 0;
}
