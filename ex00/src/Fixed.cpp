#include "Fixed.hpp"

/* -- Constructors -- */
Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/* -- Destructor -- */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* -- Overload operator -- */
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy Assignation operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();

	return *this;
}

/* Getter */
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

/* Setter */
void	Fixed::setRawBits(int const raw)
{
	std::cout << "" << std::endl;
	this->_value = raw;
}