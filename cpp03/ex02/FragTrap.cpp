#include <iostream>
#include "Colours.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << GREEN << "Default FragTrap Constructor called" << RESET << std::endl;
	name = "DEFAULT_FRAGTRAP";
	hitpoints = 100;
	energy = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << GREEN << "Named FragTrap Constructor called for unit " << name << RESET << std::endl;
	hitpoints = 100;
	energy = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << GREEN << "FragTrap Copy Constructor called" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Standard FragTrap Destructor called" << RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Fragtrap copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (!isActive())
		return ;
	std::cout << name << ": Hey Minion, gimme five!" << std::endl;
}
