#ifndef DOG_H
# define DOG_H

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain	*brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		void	setBrain(std::string idea);
		void	printBrain(void);
		void	makeSound() const;
};

#endif