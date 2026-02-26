#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	hitpoints = 100;
	energy = 50;
	attackdamage = 20;
	guardMode = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Named ScavTrap Constructor called for unit " << name << std::endl;
	hitpoints = 100;
	energy = 50;
	attackdamage = 20;
	guardMode = false;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	guardMode = other.guardMode;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Standard ScavTrap Destructor called" << std::endl;
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
	if (hitpoints <= 0)
		std::cout << "This Scavtrap unit is no longer active" << std::endl;
	else if (energy <= 0)
		std::cout << "This Scavtrap unit doesn't have enough energy to attack" << std::endl;
	else
	{
		std::cout << "Scavtrap " << name << " attacks " << target << ", causing " << attackdamage << " damage" << std::endl;
		energy--;
	}
}

void	ScavTrap::guardGate(void)
{
	if (hitpoints < 1)
		std::cout << "This ScavTrap unit is no longer functioning, and cannot guard the gate." << std::endl;
	else if (energy < 1)
		std::cout << "This ScavTrap unit has no energy remaining, and cannot guard the gate." << std::endl;
	else
	{
		//guardMode = !guardMode;
		//std::cout << "Scavtrap " << name << (guardMode ? "is now guarding " : "is no longer guarding ") << "the gate" << std::endl;
		if (guardMode == false)
		{
			std::cout << "ScavTrap " << name << " is now guarding the gate." << std::endl;
			guardMode = true;
		}
		else
		{
			std::cout << "ScavTrap " << name << " is no longer guarding the gate." << std::endl;
			guardMode = false;
		}		
	}
}

bool	ScavTrap::guardModeInfo() const
{
	return (guardMode);
}
