#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Number;
		std::string DarkSecret;
	public:
		Contact();
		~Contact();

}

#endif