#include "Zombie.hpp"

int	main()
{
	Zombie		zom1;
	Zombie		*lich;
	std::string	name = "Derek";
	std::string name2 = "Paulie";
	std::string name3 = "Timmy";

	zom1.setname(name);
	zom1.announce();
	randomChump(name2);
	lich = newZombie(name3);
	lich->announce();
	delete lich;
	return 0;
}