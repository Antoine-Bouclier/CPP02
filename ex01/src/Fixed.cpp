#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

/* -- Constructors -- */
Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "int constructor called" << std::endl;
	this->_value = value << this->_fractBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << _fractBits));

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

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractBits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_fractBits);
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
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}