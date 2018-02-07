#include <iostream>
#include <cmath>

#include "point3d.hpp"

Point3D::Point3D()
{
	this->x = 0.;
	this->y = 0.;
	this->z = 0.;
}

Point3D::Point3D(double newX, double newY, double newZ)
{
	this->x = newX;
	this->y = newY;
	this->z = newZ;
}

Point3D::~Point3D(){}

void Point3D::print()
{
	std::cout << "(" << this->x << ", " << this->y << ", " 
		<< this->z << ")" << std::endl;
}

void Point3D::setZ(double newZ)
{
	this->z = newZ;
}

double Point3D::getZ()
{
	return this->z;
}

double Point3D::getDistance(Point3D &otherPoint)
{
	return sqrt(pow(otherPoint.x - this->x, 2) + pow(otherPoint.y - this->y, 2)
			+ pow(otherPoint.z - this->z, 2));
}
