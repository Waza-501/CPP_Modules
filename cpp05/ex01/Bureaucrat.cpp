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
	_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Standard bureaucrat destructor called" << RESET << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if ((_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if ((_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

std::ostream	&operator<<(std::ostream& out, const Bureaucrat& other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << "." << std::endl;
	return (out);
}
