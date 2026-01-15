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
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif