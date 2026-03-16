#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "Colours.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << GREEN << "Standard Cat constructor called" << RESET << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other.type)
{
	std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
	brain = new Brain(*other.brain);
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	*brain = *other.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Standard Cat destructor called" << RESET << std::endl;
	delete brain;
}

void	Cat::setBrain(std::string idea)
{
	brain->fillThoughts(idea);
}

void	Cat::printBrain(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (brain->getThought(i) != "")
			std::cout << "Thought " << i << " is : " << brain->getThought(i) << std::endl;
	}
}

void	Cat::makeSound() const
{
	std::cout << "Mroww" << std::endl;
}
