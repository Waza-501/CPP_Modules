#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie chump;

	chump.setname(name);
	chump.announce();
	return ;
}