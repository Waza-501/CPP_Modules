#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *persistantZombie = new Zombie();

	persistantZombie->setname(name);
	return (persistantZombie);
}