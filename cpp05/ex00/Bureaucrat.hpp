#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <exception>

class GradeTooHighException : public std::exception
{

};

class GradeTooLowException : public std::exception
{

};

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& others);
		~Bureaucrat();
		void	setGrade(int number);
		int		getGrade() const;
};

#endif