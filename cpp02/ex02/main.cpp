#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed	b(21);
	Fixed	c(42.42f);
	Fixed const d(Fixed(5.05f) * Fixed(2));

	std::cout << "CUSTOM TESTS" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << std::boolalpha;
	std::cout << "Greater than" << std::endl;
	std::cout << a.operator>(b) << std::endl;
	std::cout << b.operator>(c) << std::endl;
	std::cout << c.operator>(a) << std::endl;
	std::cout << "Less than" << std::endl;
	std::cout << a.operator<(b) << std::endl;
	std::cout << b.operator<(c) << std::endl;
	std::cout << c.operator<(a) << std::endl;
	std::cout << "Greater than or equal" << std::endl;
	std::cout << a.operator>=(b) << std::endl;
	std::cout << b.operator>=(c) << std::endl;
	std::cout << c.operator>=(a) << std::endl;
	std::cout << "Less than or equal" << std::endl;
	std::cout << a.operator<=(b) << std::endl;
	std::cout << b.operator<=(c) << std::endl;
	std::cout << c.operator<=(a) << std::endl;
	std::cout << "Is equal to" << std::endl;
	std::cout << a.operator==(b) << std::endl;
	std::cout << b.operator==(b) << std::endl;
	std::cout << c.operator==(a) << std::endl;
	std::cout << "Not equal to" << std::endl;
	std::cout << a.operator!=(b) << std::endl;
	std::cout << b.operator!=(b) << std::endl;
	std::cout << c.operator!=(a) << std::endl;
	std::cout << std::noboolalpha;
	std::cout << "+ operator" << std::endl;
	std::cout << b.operator+(c) << std::endl;
	std::cout << "- operator" << std::endl;
	std::cout << b.operator-(c) << std::endl;
	std::cout << "* operator" << std::endl;
	std::cout << b.operator*(c) << std::endl;
	std::cout << "/ operator" << std::endl;
	std::cout << b.operator/(c) << std::endl;
	std::cout << "values are set to" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << "pre-increment" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "pre-decrement" << std::endl;
	std::cout << --a << std::endl;
	std::cout << "post-increment" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "post-decrement" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << "a now carries the value " << a << std::endl;
	std::cout << Fixed::min(b, c) << std::endl;
	std::cout << Fixed::max(b, c) << std::endl;
	std::cout << "END OF CUSTOM TESTS" << std::endl;
	std::cout << std::endl;
	std::cout << "MANDATORY TESTS" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << d << std::endl;
	std::cout << Fixed::max(a, d) << std::endl;
	return 0;
}
