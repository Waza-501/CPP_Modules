#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("default CL4P_TP"), hitpoints(10), energy(10), attackdamage(0)
{
	std::cout << "Standard ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitpoints(10), energy(10), attackdamage(0)
{
	std::cout << "Named ClapTrapConstructor called for unit " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitpoints(other.hitpoints), energy(other.energy), attackdamage(other.attackdamage)
{
	std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Standard ClapTrap Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitpoints = other.hitpoints;
		energy = other.energy;
		attackdamage = other.attackdamage;
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (name);
}

int	ClapTrap::getHitpoints(void) const
{
	return (hitpoints);
}

int	ClapTrap::getEnergy(void) const
{
	return (energy);
}

int	ClapTrap::getAttackDamage(void) const
{
	return(attackdamage);
}

void	ClapTrap::attack(const std::string target)
{
	if (hitpoints <= 0)
		std::cout << "This Claptrap unit is no longer active" << std::endl;
	else if (energy <= 0)
		std::cout << "This Claptrap unit doesn't have enough energy to attack" << std::endl;
	else
	{
		std::cout << "Claptrap " << name << " attacks " << target << ", causing " << attackdamage << " damage" << std::endl;
		energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints <= 0)
		std::cout << "This Claptrap unit is already out of action" << std::endl;
	else
	{
		std::cout << "Claptrap " << name << " takes damage, losing " << amount << " hp" << std::endl;
		hitpoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitpoints <= 0)
		std::cout << "This Claptrap unit is already out of action" << std::endl;
	else if (energy <= 0)
		std::cout << "This Claptrap unit has no energy left" << std::endl;
	else
	{
		std::cout << "Claptrap " << name << " repairs itself, gaining " << amount << " hp" << std::endl;
		hitpoints += amount;
		energy--;
	}
}
