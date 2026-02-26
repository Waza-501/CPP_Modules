#include "Weapon.hpp"

Weapon::Weapon(std::string weapontype) : type(weapontype)
{
	
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string weapontype)
{
	type = weapontype;
}

const std::string	&Weapon::getType() const
{
	return (type);
}