#include "Bureaucrat.hpp"
#include "Colours.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	std::cout << GREEN << "Standard Bureaucrat constructor called" << RESET << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade)
{
	std::cout << GREEN << "Standard Bureaucrat copy constructor called" << RESET << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator for Bureaucrat called" << std::endl;
	//name = other.name; cannot do this, because it is a constant
	_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Standard bureaucrat destructor called" << RESET << std::endl;
}

