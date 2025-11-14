#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <sstream>

class Fixed
{
	private:
		int					_value;
		static const int	_fractBits;
	public:
		/* -- Constructors -- */
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int value);
		Fixed(const float value);

		/* -- Destructor -- */
		~Fixed();

		/* -- Overload operator -- */
		Fixed &operator=(const Fixed &src);
		Fixed &operator<<(std::stringstream fixed);

		/* -- Getter -- */
		int		getRawBits(void) const;

		/* -- Setter -- */
		void	setRawBits(int const raw);

		/* -- Conversions -- */
		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif