#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << "Standard Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other.type)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Standard Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Mroww" << std::endl;
}
