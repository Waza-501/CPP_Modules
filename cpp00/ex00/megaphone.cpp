#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string	str;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int idx = 0; argv[1][idx]; idx++)
			std::cout << (char)std::toupper(argv[1][idx]);
		std::cout << std::endl;
	}
	return (0);
}
