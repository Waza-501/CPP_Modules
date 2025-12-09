#include "Phonebook.hpp"


Phonebook:: Phonebook()
{
	std::cout << "phonebook has been constructed" << std::endl;
	index = 0;
}

Phonebook:: ~Phonebook()
{
	std::cout << "phonebook has been destructed" << std::endl;
}

void	Phonebook::addnewContact()
{
	if (index == 8)
		index = 0;
}

void	Phonebook::searchContacts()
{

}

void	Phonebook::listContacts()
{

}