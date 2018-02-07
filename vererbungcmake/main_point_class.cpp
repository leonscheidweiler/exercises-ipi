#include <iostream>

#include "point2d.hpp"
#include "point3d.hpp"

int main()
{
	Point2D p1(3, 2);
	Point2D p2(5, 2);

	p1.print();
	p2.print();

	std::cout << p1.getDistance(p2) << std::endl;

	Point3D p3;
	p3.print();
	std::cout << "setting values for this point" << std::endl;

	p3.setX(4);
	p3.setY(1);
	p3.setZ(7);

	p3.print();

	Point3D p4(1, 2, 4);

	p3.getDistance(p4);

	return 0;
}
