#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <iostream>


class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string number;
		std::string darksecret;
	public:
		Contact();
		~Contact();
		std::string		getInput();
		void			previewContact();
		void			printContact();
		void			setFname(std::string string);
		void			setLname(std::string string);
		void			setNname(std::string string);
		void			setNumber(std::string string);
		void			setSecret(std::string string);
		std::string		getFname();
		std::string		getLname();
		std::string		getNname();
		std::string		getNumber();
		std::string		getSecret();
};

#endif