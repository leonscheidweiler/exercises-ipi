#include <iostream>

#include "7.1-point_class.hpp"

int main()
{
	Point2D p1(2, 5);
	Point2D p2(3, -3);

	Point3D p3(2, 5, 4);
	Point3D p4(3, -3, 0);

	double d1 = p1.calcDistance(p2);
	std::cout << d1 << std::endl;

	double d2 = p3.calcDistance(p4);
	std::cout << d2 << std::endl;

	return 0;
}
