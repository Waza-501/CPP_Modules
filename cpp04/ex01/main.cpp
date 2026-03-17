#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal*	meta[12];
	bool			type = true;

	for (int i = 0; i < 12; i++)
	{
		meta[i] = (type ? (Animal *)new Cat() : new Dog());
		type = !type;
	}
	for (int i = 0; i < 12; i++)
		std::cout << meta[i]->getType() << " in spot " << i << std::endl;
	for (int i = 0; i < 12; i++) 
		delete meta[i];
	Cat*	Meowth = new Cat();
	Cat*	Tom = new Cat();

	Meowth->setBrain("Meow meow meow, lets fill this brain with some thoughts");
	Meowth->setBrain("Second thought. You get the idea");
	Meowth->setBrain("Now we are cooking");
	Tom->setBrain("Head empty");
	Tom->setBrain("(Dog &)*dog = (Dog &)*cat");
	Meowth->printBrain();
	Tom->printBrain();
	*Tom = *Meowth;
	Meowth->printBrain();
	Tom->printBrain();
	delete Meowth;
	Tom->printBrain();
	delete Tom;
	return 0;
}
