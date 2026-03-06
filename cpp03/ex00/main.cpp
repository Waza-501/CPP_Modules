#include "ClapTrap.hpp"
#include "Colours.hpp"
#include <iostream>

void	printStats(const ClapTrap& target, const char *colour)
{
	std::cout << YELLOW << "stats for " << colour <<target.getName() << YELLOW << ": Hitpoints = " << target.getHitpoints() << " : Energy = " << target.getEnergy() << RESET << std::endl; 
}

int	main()
{
	ClapTrap	CL_TP;
	ClapTrap	Clank("Cl4P_TP");
	ClapTrap	Steve("Steve", 10, 10, 0);

	CL_TP.attack("Timmy");
	Clank.takeDamage(1);
	Clank.takeDamage(1);
	Clank.takeDamage(4);
	printStats(Clank, BLUE);
	Clank.beRepaired(6);
	Clank.beRepaired(10);
	Clank.beRepaired(0);
	Clank.beRepaired(10);
	Clank.beRepaired(10);
	Clank.attack("Charles");
	printStats(Clank, BLUE);
	Clank.beRepaired(10);
	printStats(Clank, BLUE);
	Clank.beRepaired(10);
	printStats(Clank, BLUE);
	Clank.beRepaired(10);
	printStats(Clank, BLUE);
	Clank.beRepaired(10);
	printStats(Clank, BLUE);
	Clank.beRepaired(10);
	printStats(Clank, BLUE);
	ClapTrap Clunk(Clank);
	Clank.takeDamage(90);
	Clank.beRepaired(10);
	printStats(Clank, BLUE);
	printStats(Clunk, MAGENTA);
	return (0);
}