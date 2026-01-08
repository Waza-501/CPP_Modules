#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string username) : name(username), weapon(NULL)
{

}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon &type)
{
	weapon = &type;
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << name << " attacks with " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to use, so attacks with their fists instead" << std::endl;
}