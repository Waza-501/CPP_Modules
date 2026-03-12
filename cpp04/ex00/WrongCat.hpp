#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat();
		void	makeSound() const;
};

#endif