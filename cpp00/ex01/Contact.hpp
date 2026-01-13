#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <iostream>
# include <iomanip>


class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string darksecret;
		bool		filled = false;
		void		preview(std::string info);
	public:
		Contact();
		~Contact();
		std::string		getInput();
		void			setContact();
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
		bool			isfilled();
};

#endif