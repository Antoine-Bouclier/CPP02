#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	/* -- Constructors -- */
	Point();
	Point(const float x, const float y);
	Point(const Point &copy);

	/* -- Destructors -- */
	~Point();

	/* -- overload operators -- */
	Point	&operator=(const Point &src);

	/* -- Getters -- */
	const Fixed	getX() const;
	const Fixed	getY() const;
};

std::ostream	&operator<<(std::ostream &o, Point const point);

#endif