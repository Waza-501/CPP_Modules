#include "ScavTrap.hpp"
#include <iostream>


void	printStats(const ClapTrap& target)
{
	std::cout << "Stats for " << target.getName() << ": Hitpoints = " << target.getHitpoints() << " : Energy = " << target.getEnergy() << std::endl; 
}

void	printStatsScav(const ScavTrap& target)
{
	printStats(target);
	std::cout << target.getName() << (target.guardModeInfo() ? " is guarding a gate." : " is not guarding a gate.") << std::endl;
}

int	main()
{
	ClapTrap	CL_TP;
	ClapTrap	Clank("Cl4P_TP");
	ScavTrap	Scav("Blue guy");

	CL_TP.attack("Timmy");
	Clank.takeDamage(1);
	Clank.takeDamage(1);
	Clank.takeDamage(4);
	printStatsScav(Scav);
	printStats(Clank);
	Clank.beRepaired(6);
	Clank.beRepaired(10);
	Clank.beRepaired(0);
	Clank.beRepaired(10);
	Clank.beRepaired(10);
	Clank.attack("Charles");
	Clank.beRepaired(10);
	Clank.beRepaired(10);
	Clank.beRepaired(10);
	Clank.beRepaired(10);
	Clank.beRepaired(10);
	printStats(Clank);
	Clank.takeDamage(90);
	Clank.beRepaired(10);
	printStats(Clank);
	printStatsScav(Scav);
	Scav.guardGate();
	Scav.attack("Yellow guy");
	Scav.takeDamage(90);
	Scav.beRepaired(50);
	Scav.attack("Yellow guy");
	Scav.attack("Lilith");
	printStatsScav(Scav);
	return (0);
}
