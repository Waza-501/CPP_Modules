#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Cat*	Timmy = new Cat();
	try
	{
		const Animal*	Test = new Animal();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete Timmy;
	return 0;
}
