#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact	list[8];
		int		index;
	public:
		Phonebook();
		~Phonebook();
		void	addnewContact();
		void	seachContacts();
		void	listContacts();
};

#endif