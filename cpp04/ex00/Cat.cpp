#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Standard Cat constructor called" << std::endl;
}

Cat::Cat(std::string type): type(type)
{
	std::cout << "Standard Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other): type(other.type)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator for the Cat class called" << std::endl;
	type = other.type;
	return (*this);
}

~Cat::Cat()
{
	std::cout << "Standard Cat destructor called" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Mroww" << std::endl;
}

