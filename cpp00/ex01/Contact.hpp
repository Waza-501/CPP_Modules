#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact
{
	private:
		std::string firstName;
		std::string fastName;
		std::string nickname;
		std::string number;
		std::string darksecret;
		bool		hasinfo;
	public:
		Contact();
		~Contact();
		void		setValue(std::string string);
		std::string	getValue();
		void		printContact();

};

#endif