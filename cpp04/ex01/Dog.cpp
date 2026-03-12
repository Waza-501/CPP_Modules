#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog")
{
	std::cout << "Standard Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other.type)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Standard Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
