#include <iostream>
#include <iomanip>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = string;

	stringPTR = &string;
	std::cout << "MEMORY ADDRESS:" << std::endl;
	std::cout << std::setw(12) << std::left << "string" << "= "<< &string << std::endl;
	std::cout << std::setw(12) << std::left << "pointer" << "= "<< stringPTR << std::endl;
	std::cout << std::setw(12) << std::left << "reference" << "= " << &stringREF << std::endl;

	std::cout << "MEMORY CONTAINS:" << std::endl;
	std::cout << std::setw(12) << std::left << string << std::endl;
	std::cout << std::setw(12) << std::left << *stringPTR << std::endl;
	std::cout << std::setw(12) << std::left << stringREF << std::endl;

	return 0;
}