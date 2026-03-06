#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called" << std::endl;
	value = input << bits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(input * (1 << bits));
}

Fixed::Fixed(const Fixed &other): value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

// Converts fixed-point value to integer by right-shifting
int	Fixed::toInt(void) const
{
	return (value >> bits);
}

// Converts fixed-point value to float by dividing by 2^bits
float	Fixed::toFloat(void) const
{
	return ((value / float (1 << bits)));
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value >> bits;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw << bits;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
 	return (out);
}
