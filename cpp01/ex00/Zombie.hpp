#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void		announce();
		void		setname(std::string name);
		std::string	getname();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif