#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Default FragTrap Constructor called" << std::endl;
	hitpoints = 100;
	energy = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Named FragTrap Constructor called for unit " << name << std::endl;
	hitpoints = 100;
	energy = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Standard FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Fragtrap copy assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string target)
{
	if (hitpoints <= 0)
		std::cout << "This Fragtrap unit is no longer active" << std::endl;
	else if (energy <= 0)
		std::cout << "This Fragtrap unit doesn't have enough energy to attack" << std::endl;
	else
	{
		std::cout << "Fragtrap " << name << " attacks " << target << ", causing " << attackdamage << " damage" << std::endl;
		energy--;
	}
}
