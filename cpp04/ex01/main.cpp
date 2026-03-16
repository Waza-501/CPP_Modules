#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal*	meta[12];
	bool			type = true;

	for (int i = 0; i < 12; i++)
	{
		meta[i] = (type ? (Animal *)new Cat() : new Dog());
		type = !type;
	}
	for (int i = 0; i < 12; i++)
		std::cout << meta[i]->getType() << " in spot " << i << std::endl;
	//meta[0]
	for (int i = 0; i < 12; i++) 
		delete meta[i];
	return 0;
}
