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
	if (this->index == 8)
		this->index = 0;
	this->contacts[index].setContact();
	this->index++;
	return ;
}

void	Phonebook::searchContacts()
{
	std::string	input;
	int			num;

	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		try
		{
			num = stoi(input);
		}
		catch(...)
		{
			std::cerr << "Warning, the input recieved does not match the expected values." << std::endl;
			exit(0);
		}
		if (num < 1 || num > 8)
			std::cout << "The given value does not fall within the expected range. Please try again" << std::endl;
		else
			break ;
	}
	this->contacts[num - 1].printContact();
}

void	Phonebook::listContacts()
{
	int	idx = 0;

	while (this->contacts[idx].isfilled() == true)
	{
		this->contacts[idx].previewContact();
		idx++;
	}
	return ;
}