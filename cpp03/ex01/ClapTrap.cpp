#include "ClapTrap.hpp"
#include "Colours.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("default CL4P_TP"), hitpoints(10), energy(10), attackdamage(0)
{
	std::cout << GREEN << "Standard Constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitpoints(10), energy(10), attackdamage(0)
{
	std::cout << GREEN << "Named Constructor called for unit " << name << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad): name(name), hitpoints(hp), energy(ep), attackdamage(ad)
{
	std::cout << GREEN << "Filled Constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitpoints(other.hitpoints), energy(other.energy), attackdamage(other.attackdamage)
{
	std::cout << GREEN << "Copy Constructor called" << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Standard Destructor called" << RESET << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	name = other.name;
	hitpoints = other.hitpoints;
	energy = other.energy;
	attackdamage = other.attackdamage;
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

bool	ClapTrap::isActive(void)
{
	if (hitpoints <= 0)
	{
		std::cout << "Claptrap unit " << name << " is out of action" << std::endl;
		return false;
	}
	return true;
}

bool	ClapTrap::hasEnergy(void)
{
	if (energy <= 0)
	{
		std::cout << "Claptrap unit " << name << " doesn't have enough energy to perform this action" << std::endl;
		return false;
	}
	return true;
}

void	ClapTrap::attack(const std::string target)
{
	if (!isActive())
		return ;
	if (!hasEnergy())
		return ;
	std::cout << "Claptrap " << name << " attacks " << target << ", causing " << attackdamage << " damage" << std::endl;
	energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!isActive())
		return ;
	std::cout << "Claptrap " << name << " takes damage, losing " << amount << " hp" << std::endl;
	hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!isActive())
		return ;
	if (!hasEnergy())
		return ;
	std::cout << "Claptrap " << name << " repairs itself, gaining " << amount << " hp" << std::endl;
	hitpoints += amount;
	energy--;
}
