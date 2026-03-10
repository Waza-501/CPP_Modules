#include "Animal.hpp"

Animal::Animal(): type("unknown")
{
	std::cout << "Standard Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Standard Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator for the Animal class called" << std::endl;
	type = other.type;
	return (*this);
}

~Animal::Animal()
{
	std::cout << "Standard Animal destructor called" << std::endl;
}

virtual void	Animal::makeSound()
{
	std::cout << "Think about it. What sound does an unknown animal make? Kachow maybe?" << std::endl;
}