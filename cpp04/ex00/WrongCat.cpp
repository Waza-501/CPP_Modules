#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("Feline Entity")
{
	std::cout << "Standard WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other.type)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return (*this);
	WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Standard WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Hello, I am a cat. I make cat sounds!" << std::endl;
}