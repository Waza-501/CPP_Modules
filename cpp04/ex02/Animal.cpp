#include "Animal.hpp"
#include "Colours.hpp"
#include <iostream>

Animal::Animal(): type("unknown")
{
	std::cout << YELLOW << "Standard Animal constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << YELLOW << "Standard Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << YELLOW << "Animal copy constructor called" << RESET << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator for the Animal class called" << std::endl;
	type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Standard Animal destructor called" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Think about it. What sound does an unknown animal make? Kachow maybe?" << std::endl;
}