#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <exception>


class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& others);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& other);

#endif