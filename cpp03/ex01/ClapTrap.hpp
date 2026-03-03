#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap
{
	protected:
		std::string	name;
		int			hitpoints;
		int			energy;
		int			attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int ad);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		std::string	getName(void) const;
		int			getHitpoints(void) const;
		int			getEnergy(void) const;
		int			getAttackDamage(void) const;
		bool		isActive(void);
		bool		hasEnergy(void);
		void		attack(const std::string target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif