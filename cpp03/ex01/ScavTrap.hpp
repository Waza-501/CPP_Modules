#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	guardMode;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(std::string name, int hp, int ep, int ad, bool gm);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
		void	attack(const std::string target);
		void	guardGate();
		bool	guardModeInfo() const;
};

#endif