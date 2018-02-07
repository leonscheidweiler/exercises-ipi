#include <iostream>
#include <cmath>

#include "point2d.hpp"

Point2D::Point2D()
{
	this->x = 0.;
	this->y = 0.;
}

Point2D::Point2D(double newX, double newY)
{
	this->x = newX;
	this->y = newY;
}

Point2D::~Point2D(){}

void Point2D::print()
{
	std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}

void Point2D::setX(double newX)
{
	this->x = newX;
}

void Point2D::setY(double newY)
{
	this->y = newY;
}

double Point2D::getX()
{
	return this->x;
}

double Point2D::getY()
{
	return this->y;
}

double Point2D::getDistance(Point2D &otherPoint)
{
	return sqrt(pow(otherPoint.x - this->x, 2) 
			+ pow(otherPoint.y - this->y, 2));
}
