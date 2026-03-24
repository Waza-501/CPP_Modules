#ifndef FORM_H
# define FORM_H

# include <exception>
# include <iostream>
# include <string>

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const	int			_tosign;
		const	int			_toexecute;
	public:
		Form(std::string name, int grade);
		Form(const Form& other);
		Form& operator=(const Form& others);
		~Form();
		bool		setSigned();
		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
		public:
			const char	*what() const throw()
			{
				return ("Grade is too low");
			}
		};
};

#endif