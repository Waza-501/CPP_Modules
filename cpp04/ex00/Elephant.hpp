#ifndef ELEPHANT_H
# define ELEPHANT_H

# include <string>
# include "Animal.hpp"

class Elephant : public Animal
{
	private:

	public:
		Elephant();
		Elephant(const Elephant& other);
		Elephant& operator=(const Elephant& other);
		~Elephant();
		void	makeSound() const;
};

#endif