#include "Zombie.hpp"

int	main()
{
	Zombie		*horde;
	int			size = 8;

	horde = zombieHorde(size, "Zoomer");
	for (int idx = 0; idx < size; idx++)
		horde[idx].announce();
	delete[] horde;
	return 0;
}