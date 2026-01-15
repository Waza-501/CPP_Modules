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
		int i = 1;
		while (argv[i])
		{
			for (int idx = 0; argv[i][idx]; idx++)
				std::cout << (char)std::toupper(argv[i][idx]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
