#include "Point.hpp"

/* -- Constructors -- */
Point::Point() : _x(0), _y(0)
{
	// std::cout << "Point: Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Point: Constructor called" << std::endl;
}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY())
{
	// std::cout << "Point: Copy constructor called" << std::endl;
}

/* -- Destructors -- */
Point::~Point()
{
	// std::cout << "Point: Destructor called" << std::endl;
}

/* -- Overload operators -- */
Point	&Point::operator=(const Point &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

/* -- Getters -- */
const Fixed	Point::getX() const
{
	return (this->_x);
}

const Fixed	Point::getY() const
{
	return (this->_y);
}

/* -- Overload ostream -- */
std::ostream	&operator<<(std::ostream &o, Point const point)
{
	o << "_x: " << point.getX() << " / _y: " << point.getY() << std::endl;
	return (o);
}