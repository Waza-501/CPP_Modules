#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	//std::cout << "Int constructor called" << std::endl;
	value = input << bits;
}

Fixed::Fixed(const float input)
{
	//std::cout << "Float constructor called" << std::endl;
	value = roundf(input * (1 << bits));
}

Fixed::Fixed(const Fixed &other): value(other.value)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Default destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;
	return (*this);
}

/*----------Comparison operator overloads----------*/

bool	Fixed::operator>(const Fixed &other) const
{
	return (value > other.value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (value < other.value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (value >= other.value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (value <= other.value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (value == other.value);
}
bool	Fixed::operator!=(const Fixed &other) const
{
	return (value != other.value);
}

/*----------Arithmatic operator overloads ----------*/

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(value + other.value);
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(value - other.value);
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits((value * other.value) >> bits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits((value / other.value) >> bits);
	return (result);
}

/*----------Pre/post increment and decrement operator overloads----------*/

Fixed	Fixed::operator++(int)
{
	Fixed	temp;
	temp.setRawBits(this->getRawBits());
	++value;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;
	temp.setRawBits(this->getRawBits());
	--value;
	return (temp);
}

Fixed	&Fixed::operator++(void)
{
	++value;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--value;
	return (*this);
}

Fixed	&Fixed::min(Fixed &left, Fixed &right)
{
	if (left.operator<=(right))
		return (left);
	return (right);
}

Fixed	const &Fixed::min(const Fixed &left, const Fixed &right)
{
	if (left.operator<=(right))
		return (left);
	return (right);
}

Fixed	&Fixed::max(Fixed &left, Fixed &right)
{
	if (left.operator>=(right))
		return (left);
	return (right);
}

Fixed	const &Fixed::max(const Fixed &left, const Fixed &right)
{
	if (left.operator>=(right))
		return (left);
	return (right);
}

int	Fixed::toInt(void) const
{
	return (value >> bits);
}

float	Fixed::toFloat(void) const
{
	return ((value / float (1 << bits)));
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
 	return (out);
}
