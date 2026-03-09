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
	ScavTrap	Scav("Blue guy");
	FragTrap	Clappy("Frag Trap");

	printStatsScav(Scav, RED);
	printStats(Clank, BLUE);
	printStats(Clappy, GREEN);
	Scav.guardGate();
	Scav.attack("Yellow guy");
	Scav.takeDamage(90);
	Scav.beRepaired(50);
	Scav.attack("Yellow guy");
	Clappy.attack("Lilith");
	printStatsScav(Scav, RED);
	Clappy.highFivesGuys();
	return (0);
}
