#include <string>
#include <iostream>
#include <unistd.h>
#include "Phonebook.hpp"

int main()
{
	Phonebook	book;
	std::string	input;

	usleep(400000);
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