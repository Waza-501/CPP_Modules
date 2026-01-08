#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string		name;
		const Weapon	&weapon;
	public:
		HumanA(std::string username, const Weapon &type);
		~HumanA();
		void	attack();
};

#endif
