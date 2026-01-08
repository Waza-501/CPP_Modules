#include "Harl.hpp"

int	main()
{
	Harl	mrHarl;

	std::cout << "INDIVIDUAL TESTING" << std::endl;
	mrHarl.complain("DEBUG");
	std::cout << std::endl;
	mrHarl.complain("INFO");
	std::cout << std::endl;
	mrHarl.complain("WARNING");
	std::cout << std::endl;
	mrHarl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "MULTI TESTING" << std::endl;
	mrHarl.complain("WARNING");
	mrHarl.complain("ERROR");
	std::cout << std::endl;
	mrHarl.complain("DEBUG");
	mrHarl.complain("WARNING");

	return 0;
}