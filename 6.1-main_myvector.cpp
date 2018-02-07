#include <iostream>

#include "6.1-myvector.hpp"

int main()
{
	MyVector point_a(5, 0, 2);
	MyVector point_b(3, 1, 4);
	MyVector point_c(5, 3, 5);

	MyVector a = point_b.subtract(point_a);
	MyVector b = point_c.subtract(point_b);
	MyVector c = point_a.subtract(point_c);

	bool right_angle(a.isOrthogonal(b)
			||b.isOrthogonal(c)
			||c.isOrthogonal(a));
	std::cout << "right angle: " << right_angle << std::endl;

	bool same_length(a.length() == b.length()
			|| b.length() == c.length()
			|| c.length() == a.length());
	std::cout << "same length: " << same_length << std::endl;

	MyVector zero(0, 0, 0);

	float angle_a = a.angle(c);
	float angle_b = b.angle(a);
	float angle_c = c.angle(b);

	std::cout << "angle at point a: " << angle_a << std::endl;
	std::cout << "angle at point b: " << angle_b << std::endl;
	std::cout << "angle at point c: " << angle_c << std::endl;

	float area = a.area(c)/2;

	std::cout << "area: " << area << std::endl;

	float scale = 2.;

	a = a.mult(scale);
	b = b.mult(scale);
	c = c.mult(scale);

	area = a.area(c)/2;

	std::cout << "area: " << area << std::endl;

	return 0;
}
