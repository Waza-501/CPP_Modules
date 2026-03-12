#include "Elephant.hpp"
#include "Animal.hpp"
#include <iostream>

Elephant::Elephant(): Animal("Elephant")
{
	std::cout << "Standard Elephant constructor called" << std::endl;
}

Elephant::Elephant(const Elephant& other): Animal(other.type)
{
	std::cout << "Elephant copy constructor called" << std::endl;
}

Elephant	&Elephant::operator=(const Elephant &other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}

Elephant::~Elephant()
{
	std::cout << "Standard Elephant destructor called" << std::endl;
}

void	Elephant::makeSound() const
{
	std::cout << "Bahruuuuuuhhhhaaaaa" << std::endl;
}
