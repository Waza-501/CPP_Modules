#ifndef CAT_H
# define CAT_H

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();
		void	setBrain(std::string idea);
		void	printBrain(void);
		void	makeSound() const;
};

#endif