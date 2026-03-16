#include <iostream>
#include "Brain.hpp"
#include "Colours.hpp"

Brain::Brain()
{
	std::cout << CYAN << "Standard Brain constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		thoughts[i] = "";
}

Brain::Brain(const Brain& other)
{
	std::cout << CYAN << "Brain copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		thoughts[i] = other.thoughts[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator for the Brain class called" << std::endl;
	for (int i = 0; i < 100; i++)
		thoughts[i] = other.thoughts[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << CYAN << "Standard Brain destructor called" << RESET << std::endl;
}

std::string	*Brain::getThoughts(void)
{
	return (thoughts);
}

std::string	Brain::getThought(int index)
{
	return thoughts[index];
}

void	Brain::setThoughts(const std::string idea, int index)
{
	if (index < 0)
	{
		std::cout << "Negative index" << std::endl;
		return ;
	}
	else if (index > 99)
	{
		std::cout << "Brain too small to handle that index" << std::endl;
		return ;
	}
	thoughts[index] = idea;
}

void	Brain::fillThoughts(const std::string idea)
{
	int	empty = 0;

	for (int i = 0; i < 100 && thoughts[i] != ""; i++)
		empty++;
	if (empty < 100)
		thoughts[empty] = idea;
	else
		std::cout << "Brain is full." << std::endl;
}
