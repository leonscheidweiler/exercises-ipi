#include <iostream>
#include <cmath>

double circumference_rectangle(double width, double height)
{
	return 2*(width+height);
}

double area_rectangle(double width, double height)
{
	return width*height;
}

double circumference_square(double width)
{
	return 4*width;
}

double area_square(double width)
{
	return pow(width, 2);
}

double circumference_circle(double radius)
{
	return 2*M_PI*radius;
}

double area_circle(double radius)
{
	return M_PI*pow(radius, 2);
}

double surface_area_cuboid(double width, double height, double depth)
{
	return 2*(width*height+width*depth+height*depth);
}

double volume_cuboid(double width, double height, double depth)
{
	return width*height*depth;
}

double surface_area_cube(double width)
{
	return 6*pow(width, 2);
}

double volume_cube(double width)
{
	return pow(width, 3);
}

double surface_area_sphere(double radius)
{
	return 4*M_PI*pow(radius, 2);
}

double volume_sphere(double radius)
{
	return 4/3*M_PI*pow(radius, 3);
}

int main()
{
	int dim;
	int body;

	std::cout << "Enter number of dimensions (2 or 3 allowed): " << std::endl;
	std::cin >> dim;

	switch(dim)
	{
		case 2:
			std::cout << "Enter number of body: " << std::endl;
			std::cout << "0 - rectangle" << std::endl;
			std::cout << "1 - square" << std::endl;
			std::cout << "2 - circle" << std::endl;
			std::cin >> body;
			break;
		case 3:
			std::cout << "Enter number of body: " << std::endl;
			std::cout << "0 - cuboid" << std::endl;
			std::cout << "1 - cube" << std::endl;
			std::cout << "2 - sphere" << std::endl;
			std::cin >> body;
			break;
		default:
			std::cout << "Only 2 and 3 dimensions allowed." << std::endl;
	}

	double width, height, depth, radius;

	if (dim==2 && body==0)
	{
		std::cout << "Rectangle" << std::endl;
		std::cout << "Enter width: ";
		std::cin >> width;
		std::cout << "Enter height: ";
		std::cin >> height;
		std::cout << "circumference = " 
			<< circumference_rectangle(width, height) << std::endl;
		std::cout << "area = " << area_rectangle(width, height) << std::endl;
	}

	else
	{
		std::cout << "Not yet implemented" << std::endl;
	}

	return 0;
}
