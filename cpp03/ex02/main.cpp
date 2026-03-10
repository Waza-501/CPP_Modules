#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "Colours.hpp"
#include <iostream>

void	printStats(const ClapTrap& target, const char *colour)
{
	std::cout << YELLOW << "stats for " << colour <<target.getName() << YELLOW << ": Hitpoints = " << target.getHitpoints() << " : Energy = " << target.getEnergy() << RESET << std::endl; 
}

void	printStatsScav(const ScavTrap& target, const char *colour)
{
	printStats(target, colour);
	std::cout << colour << target.getName() << YELLOW << (target.guardModeInfo() ? " is guarding a gate." : " is not guarding a gate.") << RESET << std::endl;
}

int	main()
{
	ClapTrap	Clank("Cl4P_TP");
	FragTrap	Clappy("FragTrap");

	printStats(Clank, RED);
	printStats(Clappy, GREEN);
	Clappy.takeDamage(90);
	Clappy.beRepaired(50);
	Clappy.attack("Yellow guy");
	Clappy.attack("Lilith");
	Clappy.highFivesGuys();
	printStats(Clappy, GREEN);
	return (0);
}
