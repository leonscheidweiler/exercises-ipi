#include <iostream>
#include <cmath>

#include "7.1-point_class.hpp"

Point2D::Point2D()
{
	x = 0.;
	y = 0.;
}

Point2D::Point2D(double newX, double newY)
{
	x = newX;
	y = newY;
}

Point2D::~Point2D()
{

}

void Point2D::print()
{
	std::cout << "(" << this->x << ", " << this->y << std::endl;
}

void Point2D::setX(double newX)
{
	this->x = newX;
}

void Point2D::setY(double newY)
{
	this->y = newY;
}

double Point2D::getX() const
{
	return this->x;
}

double Point2D::getY() const
{
	return this->y;
}

double Point2D::calcDistance(const Point2D& newPoint) const
{
	return sqrt(pow(newPoint.x - this->x, 2) + pow(newPoint.y - this->y, 2));
}

Point3D::Point3D()
{
	x = 0;
	y = 0;
	z = 0;
}

Point3D::Point3D(double newX, double newY, double newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

Point3D::~Point3D()
{

}

void Point3D::print()
{
	std::cout << "(" << this->x << ", " << this->y 
		<< ", " << this->z << std::endl;
}

void Point3D::setZ(double newZ)
{
	this->z = newZ;
}

double Point3D::getZ() const
{
	return this->z;
}

double Point3D::calcDistance(const Point3D& newPoint) const
{
	return sqrt(pow(newPoint.x - this->x, 2) + pow(newPoint.y - this->y, 2)
			+ pow(newPoint.z - this->z, 2));
}
