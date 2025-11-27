#include "Contact.hpp"

Contact:: Contact()
{

}

Contact:: ~Contact()
{

}

void	Contact::setValue(std::string string)
{
	firstName = string;
}

std::string	Contact::getValue()
{
	return firstName;
}

void	Contact::printContact()
{

}
