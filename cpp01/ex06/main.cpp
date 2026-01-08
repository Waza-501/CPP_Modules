#include "Harl.hpp"

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Harl would like one input :)" << std::endl;
		return 0;
	}
	Harl		mrHarl;
	std::string	input = argv[1];
	mrHarl.complain(input);
	return 0;
}