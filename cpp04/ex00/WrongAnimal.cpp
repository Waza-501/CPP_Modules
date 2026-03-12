#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): type("Rhett Butler")
{
	std::cout << "Standard WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "Standard WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator for the WrongAnimal class called" << std::endl;
	type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Standard WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Frankly, my dear, I don't give a damn." << std::endl;
}