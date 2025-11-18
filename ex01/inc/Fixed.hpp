#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <sstream>
#include <math.h>

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
		
		
		/* -- Getter -- */
		int		getRawBits(void) const;
		
		/* -- Setter -- */
		void	setRawBits(int const raw);
		
		/* -- Conversions -- */
		float	toFloat(void) const;
		int		toInt(void) const;
	};
	
std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif