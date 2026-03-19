#include "Bureaucrat.hpp"
#include "Colours.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	std::cout << GREEN << "Standard Bureaucrat constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade)
{
	std::cout << GREEN << "Standard Bureaucrat copy constructor called" << RESET << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator for Bureaucrat called" << std::endl;
	//name = other.name; cannot do this, because constant
	grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Standard bureaucrat destructor called" << RESET << std::endl;
}

