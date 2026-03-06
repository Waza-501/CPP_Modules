#include <iostream>
#include "Colours.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << GREEN << "Default ScavTrap Constructor called" << RESET << std::endl;
	hitpoints = 100;
	energy = 50;
	attackdamage = 20;
	guardMode = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << GREEN << "Named ScavTrap Constructor called" << RESET << std::endl;
	hitpoints = 100;
	energy = 50;
	attackdamage = 20;
	guardMode = false;
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int ad, bool gm): ClapTrap(name, hp, ep, ad), guardMode(gm)
{
	std::cout << GREEN << "Filled ScavTrap Constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << GREEN << "ScavTrap Copy Constructor called" << RESET << std::endl;
	guardMode = other.guardMode;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Standard ScavTrap Destructor called" << RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		guardMode = other.guardMode;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string target)
{
	if (!isActive())
		return ;
	if (!hasEnergy())
		return ;
	else
	{
		std::cout << "Scavtrap " << name << " attacks " << target << ", causing " << attackdamage << " damage" << std::endl;
		energy--;
	}
}

void	ScavTrap::guardGate(void)
{
	if (!isActive())
		return ;
	if (!hasEnergy())
		return ;
	guardMode = !guardMode;
	std::cout << "Scavtrap " << name << (guardMode ? "is now guarding " : "is no longer guarding ") << "the gate" << std::endl;
	// if (guardMode == false)
	// {
	// 	std::cout << "ScavTrap " << name << " is now guarding the gate." << std::endl;
	// 	guardMode = true;
	// }
	// else
	// {
	// 	std::cout << "ScavTrap " << name << " is no longer guarding the gate." << std::endl;
	// 	guardMode = false;
	// }		
}

bool	ScavTrap::guardModeInfo() const
{
	return (guardMode);
}
