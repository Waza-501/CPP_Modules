#include "Bureaucrat.hpp"
#include <iostream>

void	makePerson(std::string name, int grade)
{
	try
	{
		Bureaucrat	Cog(name, grade);
		std::cout << Cog;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

int	main()
{
	makePerson("Timothy", 80);
	makePerson("Jimothy", 151);
	makePerson("Dimothy", 0);
	try
	{
		Bureaucrat	Tony("Tony", 42);
		std::cout << "incrementing Tony until it fails" << std::endl;
		for (int i = 0; i < 200; i++)
		{
			try
			{
				Tony.incrementGrade();
				std::cout << Tony;
			}
			catch(const std::exception& e)
			{
				std::cerr << "Exception caught: " << e.what() << std::endl;
				break ;
			}	
		}
	}
	catch(const	std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Donny("Donny", 42);
		std::cout << "incrementing Donny until it fails" << std::endl;
		for (int i = 0; i < 200; i++)
		{
			try
			{
				Donny.decrementGrade();
				std::cout << Donny;
			}
			catch(const std::exception& e)
			{
				std::cerr << "Exception caught: " << e.what() << std::endl;
				break ;
			}	
		}
	}
	catch(const	std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}