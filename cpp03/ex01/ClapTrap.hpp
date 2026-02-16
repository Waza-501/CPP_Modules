#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap
{
private:
	std::string	name;
	int			hitpoints;
	int			energy;
	int			attackdamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
	void		setHitpoints(unsigned int amount);
	void		setEnergy(unsigned int amount);
	std::string	getName(void) const;
	int			getHitpoints(void) const;
	int			getEnergy(void) const;
	int			getAttackDamage(void) const;
	void		attack(const std::string target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif