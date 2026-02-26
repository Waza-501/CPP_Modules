#include "Zombie.hpp"

Zombie:: Zombie()
{
	std::cout << "Zombie created" << std::endl;
}

Zombie:: ~Zombie()
{
	std::cout << name << " Has been destroyed" << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

std::string	Zombie::getname(void)
{
	return name;
}

void	Zombie::announce()
{
	std::cout << this->getname() << ": BraiiiiiiinnnzzzZ.." << std::endl;
}