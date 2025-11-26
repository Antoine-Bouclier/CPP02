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

			/* -- Comparison Operators -- */
			bool operator>(Fixed fixed)const;
			bool operator<(Fixed fixed)const;
			bool operator>=(Fixed fixed)const;
			bool operator<=(Fixed fixed)const;
			bool operator==(Fixed fixed)const;
			bool operator!=(Fixed fixed)const;

			/* -- Arithmetic Operators -- */
			float operator+(Fixed fixed)const;
			float operator-(Fixed fixed)const;
			float operator*(Fixed fixed)const;
			float operator/(Fixed fixed)const;

			/* -- pre-increment Operators -- */
			Fixed operator++();
			Fixed operator--();

			/* -- post-increment Operators -- */
			Fixed operator++(int);
			Fixed operator--(int);
		
		/* -- Getter -- */
		int		getRawBits(void) const;
		
		/* -- Setter -- */
		void	setRawBits(int const raw);
		
		/* -- Conversions -- */
		float	toFloat(void) const;
		int		toInt(void) const;

		/* Comparison */
		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, const Fixed &second);
	};

/* -- Overload operator ostream -- */
std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif