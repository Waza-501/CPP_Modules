#include "Contact.hpp"

Contact:: Contact()
{

}

Contact:: ~Contact()
{

}

std::string	Contact::getInput()
{
	std::string	input;

	while (true)
	{
		getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		else if (std::cin.good() && !input.empty())
			break ;
		else
			std::cout << "invalid input, please try again." << std::endl;
	}
	return (input);
}

void	Contact::setContact()
{
	std::cout << "First name: " << std::endl;
	this->setFname(getInput());
	std::cout << "Last name: " << std::endl;
	this->setLname(getInput());
	std::cout << "Nickname: " << std::endl;
	this->setNname(getInput());
	std::cout << "Phone number: " << std::endl;
	this->setNumber(getInput());
	std::cout << "Darkest secret: " << std::endl;
	this->setSecret(getInput());
	std::cout << "Contact added!" << std::endl;
	this->filled = true;
	return ;
}

void	Contact::previewContact()
{
	std::cout << std::setw(10) << this->getFname() << " |";
	std::cout << std::setw(10) << this->getLname() << " |";
	std::cout << std::setw(10) << this->getNname() << " |";
	std::cout << std::setw(10) << this->getNumber() << " |";
	std::cout << std::setw(10) << this->getSecret() << std::endl;
}

void	Contact::printContact()
{
	std::cout << this->getFname() << std::endl;
	std::cout << this->getLname() << std::endl;
	std::cout << this->getNname() << std::endl;
	std::cout << this->getNumber() << std::endl;
	std::cout << this->getSecret() << std::endl;
}

/*-----------------Getters and Setters-----------------*/
void	Contact::setFname(std::string string)
{
	firstname = string;
}

void	Contact::setLname(std::string string)
{
	lastname = string;
}

void	Contact::setNname(std::string string)
{
	nickname = string;
}

void	Contact::setNumber (std::string string)
{
	number = string;
}

void	Contact::setSecret (std::string string)
{
	darksecret = string;
}

std::string	Contact::getFname()
{
	return firstname;
}

std::string	Contact::getLname()
{
	return lastname;
}

std::string	Contact::getNname()
{
	return nickname;
}

std::string	Contact::getNumber()
{
	return number;
}

std::string	Contact::getSecret()
{
	return darksecret;
}

bool	Contact::isfilled()
{
	return filled;
}
