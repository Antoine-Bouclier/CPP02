#include <iostream>
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	Point p1(3, 3);
	Point p2(10, 10);
	Point p3(0, 5);
	Point p4(2, 7);
	Point p5(5, 0);
	Point p6(8, 1);
	Point p7(10, 3);
	Point p8(-1, 5);

	std::cout << "p1 : " << (bsp(a, b, c, p1) ? "inside" : "outside") << std::endl;
	std::cout << "p2 : " << (bsp(a, b, c, p2) ? "inside" : "outside") << std::endl;
	std::cout << "p3 : " << (bsp(a, b, c, p3) ? "inside" : "outside") << std::endl;
	std::cout << "p4 : " << (bsp(a, b, c, p4) ? "inside" : "outside") << std::endl;
	std::cout << "p5 : " << (bsp(a, b, c, p5) ? "inside" : "outside") << std::endl;
	std::cout << "p6 : " << (bsp(a, b, c, p6) ? "inside" : "outside") << std::endl;
	std::cout << "p7 : " << (bsp(a, b, c, p7) ? "inside" : "outside") << std::endl;
	std::cout << "p8 : " << (bsp(a, b, c, p8) ? "inside" : "outside") << std::endl;

	return 0;
}
