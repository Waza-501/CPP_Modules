#include <string>
#include <iostream>
#include "Phonebook.hpp"

int main()
{
	Phonebook	book;
	std::string	input;

	std::cout << "WELCOME TO YOUR PHONEBOOK" << std::endl;
	while (true)
	{
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << "WHAT WOULD YOU LIKE TO DO" << std::endl;
		std::cout << "ADD      SEARCH      EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "ADD has been selected" << std::endl;
			book.addnewContact();
		}
		else if (input == "SEARCH")
		{
			std::cout << "SEARCH has been selected" << std::endl;
			book.listContacts();
			std::cout << "Please select a contact to view" << std::endl;
			book.searchContacts();
		}
		else if (input == "EXIT")
			break ;
		else if (std::cin.eof())
			break ;
		else
			std::cout << "COMMAND NOT RECOGNISED. PLEASE TRY AGAIN" << std::endl << std::endl;
	}
	return 0;
}