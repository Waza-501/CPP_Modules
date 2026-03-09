#include "Animal.hpp"

Animal::Animal(): type("unknown")
{
	std::cout << "Standard Animal constructor called." << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Standard Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}