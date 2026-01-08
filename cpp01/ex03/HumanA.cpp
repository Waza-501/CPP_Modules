#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string username, const Weapon &type) : name(username), weapon(type)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << name << " attacks with " << this->weapon.getType() << std::endl;
}