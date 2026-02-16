#include "ClapTrap.hpp"
#include <iostream>


void	printStats(const ClapTrap& target)
{
	std::cout << "stats for " << target.getName() << ": Hitpoints = " << target.getHitpoints() << " : Energy = " << target.getEnergy() << std::endl; 
}

int	main()
{
	ClapTrap	CL_TP;
	ClapTrap	Clank("Cl4P_TP");

	CL_TP.attack("Timmy");
	Clank.takeDamage(1);
	Clank.takeDamage(1);
	Clank.takeDamage(4);
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
	return (0);
}