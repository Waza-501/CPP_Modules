#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contacts[8];
		int		index;
	public:
		Phonebook();
		~Phonebook();
		void	addnewContact();
		void	searchContacts();
		void	listContacts();
};

#endif