#ifndef FIXED_H
# define FIXED_H

# include <ostream>

class	Fixed
{
	private:
		int					value;
		const static int	bits = 8;
	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed &other);
		~Fixed();
		Fixed		&operator=(const Fixed &other);
		bool		operator>(const Fixed &other) const;
		bool		operator<(const Fixed &other) const;
		bool		operator>=(const Fixed &other) const;
		bool		operator<=(const Fixed &other) const;
		bool		operator==(const Fixed &other) const;
		bool		operator!=(const Fixed &other) const;
		Fixed		operator+(const Fixed &other) const;
		Fixed		operator-(const Fixed &other) const;
		Fixed		operator*(const Fixed &other) const;
		Fixed		operator/(const Fixed &other) const;
		Fixed		operator++(int);
		Fixed		operator--(int);
		Fixed		&operator++(void);
		Fixed		&operator--(void);
		static Fixed		&min(Fixed &left, Fixed &right);
		static const Fixed	&min(const Fixed &left, const Fixed &right);
		static Fixed		&max(Fixed &left, Fixed &right);
		static const Fixed	&max(const Fixed &left, const Fixed &right);
		int			toInt(void) const;
		float		toFloat(void) const;
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif