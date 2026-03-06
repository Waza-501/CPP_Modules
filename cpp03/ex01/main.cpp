#include "ScavTrap.hpp"
#include "Colours.hpp"
#include <iostream>

void	printStats(const ClapTrap& target, const char *colour)
{
	std::cout << YELLOW << "stats for " << colour <<target.getName() << YELLOW << ": Hitpoints = " << target.getHitpoints() << " : Energy = " << target.getEnergy() << RESET << std::endl; 
}

void	printStatsScav(const ScavTrap& target, const char *colour)
{
	printStats(target);
	std::cout << colour << target.getName() << YELLOW << (target.guardModeInfo() ? " is guarding a gate." : " is not guarding a gate.") << RESET << std::endl;
}

int	main()
{
	ClapTrap	Clank("Cl4P_TP");
	ScavTrap	Scav("Blue guy");

	printStatsScav(Scav, RED);
	printStats(Clank, BLUE);
	Scav.guardGate();
	Scav.attack("Yellow guy");
	Scav.takeDamage(90);
	Scav.beRepaired(50);
	Scav.attack("Yellow guy");
	Scav.attack("Lilith");
	printStatsScav(Scav);
	return (0);
}
