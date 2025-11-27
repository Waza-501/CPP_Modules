#include "Phonebook.hpp"


Phonebook:: Phonebook()
{
	index = 0;


}

Phonebook:: ~Phonebook()
{
	
}

void	Phonebook::addnewContact()
{
	if (index == 8)
		index = 0;
	if (Contact[index].hasinfo == true)
	
}

void	Phonebook::searchContacts()
{

}

void	Phonebook::listContacts()
{

}