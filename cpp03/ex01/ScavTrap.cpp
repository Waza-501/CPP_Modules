#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	hitpoints = 100;
	energy = 50;
	attackdamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Named ScavTrap Constructor called for unit " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Standard ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	name = other.name;
	hitpoints = other.hitpoints;
	energy = other.energy;
	attackdamage = other.attackdamage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	
}