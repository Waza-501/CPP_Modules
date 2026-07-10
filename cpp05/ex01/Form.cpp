#include "Form.hpp"

Form::Form(std::string name, int tosign, int toexecute): _name(name), _tosign(tosign), _toexecute(toexecute)
{
	if (tosign < 1)
		throw Form::GradeTooHighException();
	if (tosign > 150)
		throw Form::GradeTooLowException();
	if (toexecute < 1)
		throw Form::GradeTooHighException();
	if (toexecute > 150)
		throw Form::GradeTooLowException();
}
Form::Form(const Form& other): _name(other.getName()), _signed(other.getSigned()), _tosign(other.getSignGrade()), _toexecute(other.getExecGrade())
{
}

