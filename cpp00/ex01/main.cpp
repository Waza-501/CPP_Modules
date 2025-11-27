#include <string>
#include <iostream>
#include <unistd.h>
#include "Phonebook.hpp"

int main()
{
	std::string	input;

	while (true)
	{
		std::cout << "WELCOME TO YOUR PHONEBOOK" << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << "WHAT WOULD YOU LIKE TO DO" << std::endl;
		usleep(400000);
		std::cout << "ADD      SEARCH      EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			std::cout << "ADD has been selected" << std::endl;
		else if (input == "SEARCH")
			std::cout << "SEARCH has been selected" << std::endl;
		else if (input == "EXIT")
		{
			std::cout << "EXIT has been selected" << std::endl;
			break ;
		}
		else if (std::cin.eof())
			break ;
		else
			std::cout << "COMMAND NOT RECOGNISED. PLEASE TRY AGAIN" << std::endl << std::endl;
	}
	return 0;
}