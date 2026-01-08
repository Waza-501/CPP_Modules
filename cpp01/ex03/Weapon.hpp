#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string weapontype);
		~Weapon();
		void				setType(std::string weapontype);
		const std::string	&getType() const;
};

#endif
