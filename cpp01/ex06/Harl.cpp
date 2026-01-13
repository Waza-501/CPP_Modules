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
			(this->*funcs[0])();
		case 1:	
			(this->*funcs[1])();
		case 2:
			(this->*funcs[2])();
		case 3:
		{
			(this->*funcs[3])();
			break ;
		}
		case 4:
		{
			std::cout << "Don't forget to hydrate!" << std::endl;
			return ;
		}
	}
}