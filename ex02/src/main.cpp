#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed	b(2);
	Fixed	c(5.05f);
	Fixed const d( c * b );
	Fixed	e(5);
	Fixed	f(-53);
	Fixed const g(2);

	std::cout << a << std::endl;

	/* -- Comparison operators -- */
	std::cout << "\033[31mComparison operators\033[0m" << std::endl;

		std::cout << a << " != " << b << " : " << (a != b ? "true" : "false") << std::endl;
		std::cout << a << " != " << a << " : " << (a != a  ? "true" : "false") << std::endl;
		std::cout << c << " != " << e << " : " << (b != a  ? "true" : "false") << std::endl;

			std::cout << std::endl;

		std::cout << a << " == " << b << " : " << (a == b ? "true" : "false") << std::endl;
		std::cout << a << " == " << a << " : " << (a == a  ? "true" : "false") << std::endl;
		std::cout << c << " == " << e << " : " << (b == a  ? "true" : "false") << std::endl;

			std::cout << std::endl;

		std::cout << a << " <= " << b << " : " << (a <= b ? "true" : "false") << std::endl;
		std::cout << a << " <= " << a << " : " << (a <= a  ? "true" : "false") << std::endl;
		std::cout << b << " <= " << a << " : " << (b <= a  ? "true" : "false") << std::endl;
		std::cout << c << " <= " << e << " : " << (b <= a  ? "true" : "false") << std::endl;

			std::cout << std::endl;

		std::cout << a << " >= " << b << " : " << (a >= b ? "true" : "false") << std::endl;
		std::cout << a << " >= " << a << " : " << (a >= a  ? "true" : "false") << std::endl;
		std::cout << b << " >= " << a << " : " << (b >= a  ? "true" : "false") << std::endl;
		std::cout << c << " >= " << e << " : " << (b >= a  ? "true" : "false") << std::endl;

			std::cout << std::endl;

		std::cout << a << " < " << b << " : " << (a < b ? "true" : "false") << std::endl;
		std::cout << a << " < " << a << " : " << (a < a  ? "true" : "false") << std::endl;
		std::cout << b << " < " << a << " : " << (b < a  ? "true" : "false") << std::endl;
		std::cout << c << " < " << e << " : " << (b < a  ? "true" : "false") << std::endl;

			std::cout << std::endl;

		std::cout << a << " > " << b << " : " << (a > b ? "true" : "false") << std::endl;
		std::cout << a << " > " << a << " : " << (a > a  ? "true" : "false") << std::endl;
		std::cout << b << " > " << a << " : " << (b > a  ? "true" : "false") << std::endl;
		std::cout << c << " > " << e << " : " << (b > a  ? "true" : "false") << std::endl;

			std::cout << std::endl;

	/* -- Arithmetic operators -- */
	std::cout << "\033[31mArithmetic operators\033[0m" << std::endl;

		std::cout << a << " + " << b << " = " << (a + b) << std::endl;
		std::cout << b << " + " << e << " = " << (b + e) << std::endl;
		std::cout << c << " + " << e << " = " << (c + e) << std::endl;
		std::cout << c << " + " << f << " = " << (c + e) << std::endl;

			std::cout << std::endl;

		std::cout << a << " - " << b << " = " << (a - b) << std::endl;
		std::cout << b << " - " << e << " = " << (b - e) << std::endl;
		std::cout << c << " - " << e << " = " << (c - e) << std::endl;
		std::cout << c << " - " << f << " = " << (c - e) << std::endl;

			std::cout << std::endl;

		std::cout << a << " * " << b << " = " << (a * b) << std::endl;
		std::cout << b << " * " << e << " = " << (b * e) << std::endl;
		std::cout << c << " * " << e << " = " << (c * e) << std::endl;
		std::cout << c << " * " << f << " = " << (c * e) << std::endl;

			std::cout << std::endl;

		std::cout << a << " / " << b << " = " << (a / b) << std::endl;
		std::cout << b << " / " << e << " = " << (b / e) << std::endl;
		std::cout << c << " / " << e << " = " << (c / e) << std::endl;
		std::cout << c << " / " << f << " = " << (c / e) << std::endl;

			std::cout << std::endl;

	/* -- Incrementation | Decrementation -- */
	std::cout << "\033[31mIncrementation | Decrementation\033[0m" << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << --a << std::endl;
		std::cout << a-- << std::endl;

			std::cout << std::endl;

	/* -- Min | Max -- */
	std::cout << "\033[31mMin | Max\033[0m" << std::endl;

	std::cout  << Fixed::max( a, b ) << " is greater than " << Fixed::min(a, b) << std::endl;
	std::cout  << Fixed::max( d, g ) << " is greater than " << Fixed::min(d, g) << std::endl;
	return (0);
}

/* int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
} */