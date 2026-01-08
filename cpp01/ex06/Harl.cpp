#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

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
	void		(Harl::*funcs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

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
			for (; idx < 4; idx++)
				(this->*funcs[idx])();
			break ;
		}
		case 1:
		{
			for (; idx < 4; idx++)
				(this->*funcs[idx])();
			break ;
		}
		case 2:
		{
			for (; idx < 4; idx++)
				(this->*funcs[idx])();
			break ;
		}
		case 3:
		{
			for (; idx < 4; idx++)
				(this->*funcs[idx])();
			break ;
		}
		case 4:
		{
			std::cout << "Surely, he cought his train right?" << std::endl;
			return ;
		}
	}
}