#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl has been destroyed" << std::endl;
}

void	Harl::debug()
{
	std::cout << "DEBUG" << std::endl;
	std::cout << "I am sure I can catch my train" << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO" << std::endl;
	std::cout << "Wait the front entrance is closed?" << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING" << std::endl;
	std::cout << "Oh no, I might miss my train!" << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR" << std::endl;
	std::cout << "OUT OF MY WAY I HAVE TO CATCH MY TRAIN!!" << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	idx = 0;
	for (; idx < 4; idx++)
	{
		if (levels[idx] == level)
			break;
		
	}
	switch (idx)
	{
		case 0:
		{
			this->debug();
		}
		case 1:	
		{
			this->info();
		}
		case 2:
		{
			this->warning();
		}
		case 3:
		{
			this->error();
			break ;
		}
		case 4:
		{
			std::cout << "well, this is awkward..." << std::endl;
			return ;
		}
	}
}
