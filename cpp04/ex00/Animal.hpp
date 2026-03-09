#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		~Animal();
		virtual void	makeSound();
};

#endif