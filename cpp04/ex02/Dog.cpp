#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "Colours.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog")
{
	std::cout << GREEN << "Standard Dog constructor called" << RESET << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& other): Animal(other.type)
{
	std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
	brain = new Brain(*other.brain);
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	*brain = *other.brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Standard Dog destructor called" << RESET << std::endl;
	delete brain;
}

void	Dog::setBrain(std::string idea)
{
	brain->fillThoughts(idea);
}

void	Dog::printBrain(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (brain->getThought(i) != "")
			std::cout << "Thought " << i << " is : " << brain->getThought(i) << std::endl;
	}
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
