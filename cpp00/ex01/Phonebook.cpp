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
			num = std::stoi(input);
		}
		catch(...)
		{
			std::cerr << "Was I not clear enough about what I expected from you?" << std::endl;
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
		std::cout << std::setw(10) <<  idx + 1;
		std::cout << " | ";
		this->contacts[idx].previewContact();
		std::cout << std::endl;
		idx++;
	}
	return ;
}