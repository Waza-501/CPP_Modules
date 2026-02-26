#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie		*horde;
	std::string	fullname;

	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde[i].setname(name);
	}
	return horde;
}
