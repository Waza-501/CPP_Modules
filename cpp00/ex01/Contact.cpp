#include "Contact.hpp"

Contact:: Contact()
{
	std::cout << "contact has been constructed" << std::endl;
}

Contact:: ~Contact()
{
	std::cout << "contact has been destructed" << std::endl;
}

std::string	Contact::getInput()
{
	
}

void	Contact::previewContact()
{

}

void	Contact::printContact()
{

}

/*-----------------Getters and Setters-----------------*/
void	Contact::setFname(std::string string)
{
	firstName = string;
}

void	Contact::setLname(std::string string)
{
	lastName = string;
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
	return firstName;
}

std::string	Contact::getLname()
{
	return lastName;
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
