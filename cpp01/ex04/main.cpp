#include <iostream>
#include <string>
#include <fstream>

void	replace_string(const std::string filename, const std::string original, const std::string replacement)
{
	std::ifstream	in(filename);
	if (!in.is_open())
	{
		std::cerr << "Error: Could not open file" << std::endl;
		return ;
	}
	std::ofstream	out(filename + ".replace");
	if (!out.is_open())
	{
		std::cerr << "Error: Could not create file" << std::endl;
		in.close();
		return ;
	}
	std::string line;
	std::string newline;
	while (std::getline(in, line))
	{
		size_t pos = 0;
		while (pos < line.size())
		{
			size_t target = line.find(original, pos);
			if (target == line.npos)
			{
				newline += line.substr(pos);
				break ;
			}
			newline += line.substr(pos, target - pos);
			newline += replacement;
			pos = target + original.size();
		}
		out << newline << std::endl;
		newline.clear();
	}
	in.close();
	out.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Please provide valid input. The expected input is filename, string 1, string 2" << std::endl;
	std::string filename = argv[1];
	std::string	original = argv[2];
	std::string replacement = argv[3];
	replace_string(filename, original, replacement);
	return 0;
}