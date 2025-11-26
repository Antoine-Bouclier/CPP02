#include <cmath>
#include "Point.hpp"

static float area(Point const a, Point const b, Point const c)
{
	return fabs(
		(a.getX() * (b.getY() - c.getY()) +
		b.getX() * (c.getY() - a.getY()) +
		c.getX() * (a.getY() - b.getY())) 
		/ 2.0f
	);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float areaABC = area(a, b, c);
	float area1 = area(point, b, c);
	float area2 = area(a, point, c);
	float area3 = area(a, b, point);

	return (area1 > 0 && area2 > 0 && area3 > 0 &&
			(area1 + area2 + area3) <= areaABC + 0.0001f);
}