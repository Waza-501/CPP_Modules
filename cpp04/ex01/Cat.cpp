#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << "Standard Cat constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other.type)
{
	std::cout << "Cat copy constructor called" << std::endl;
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
	std::cout << "Standard Cat destructor called" << std::endl;
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
		if (brain->getThought[i] != "")
			std::cout << "Thought " << i << " is : " << brain->getThought(i) << std::endl;
	}
}

void	Cat::makeSound() const
{
	std::cout << "Mroww" << std::endl;
}
