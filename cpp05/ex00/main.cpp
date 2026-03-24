#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		Bureaucrat	Timothy("Timothy", 120);
		std::cout << "Created Timothy, grade is 120" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Execption caught: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Jimothy("Jimothy", 0);
		std::cout << "Created Jimothy, grade is 0" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Execption caught: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Dimothy("Dimothy", 151);
		std::cout << "Created Dimothy, grade is 151" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Execption caught: " << e.what() << std::endl;
	}
	return (0);
}