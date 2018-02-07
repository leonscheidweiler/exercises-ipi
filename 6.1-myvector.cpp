#include <iostream>
#include <cmath>

#include "6.1-myvector.hpp"

MyVector::MyVector()
{
	x = 0;
	y = 0;
	z = 0;
}

MyVector::MyVector(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

MyVector::~MyVector()
{

}

void MyVector::print()
{
	std::cout << this->x << ", " << this->y << ", " << this->z << std::endl;
}

void MyVector::setValues(float newX, float newY, float newZ)
{
	this->x = newX;
	this->y = newY;
	this->z = newZ;
}

void MyVector::setX(float newX)
{
	this->x = newX;
}

void MyVector::setY(float newY)
{
	this->y = newY;
}

void MyVector::setZ(float newZ)
{
	this->z = newZ;
}

float MyVector::getX() const
{
	return this->x;
}

float MyVector::getY() const
{
	return this->y;
}

float MyVector::getZ() const
{
	return this->z;
}

float MyVector::length() const
{
	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));	
}

MyVector MyVector::add(const MyVector& vec)
{
	return MyVector(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

MyVector MyVector::subtract(const MyVector& vec)
{
	return MyVector(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

MyVector MyVector::mult(float scale)
{
	return MyVector(scale*this->x, scale*this->y, scale*this->z);
}

float MyVector::dot(const MyVector& vec)
{
	return this->x*vec.x + this->y*vec.y + this->z*z;
}

MyVector MyVector::cross(const MyVector& vec)
{
	return MyVector(this->y*vec.z - this->z*vec.y,
			this->z*vec.x - this->x*vec.z,
			this->x*vec.y - this->y*vec.x);
}

float MyVector::angle(const MyVector& vec)
{
	return acos(this->dot(vec)/(this->length()*vec.length()));
}

float MyVector::area(const MyVector& vec)
{
	return this->cross(vec).length();
}

bool MyVector::isParallel(const MyVector& vec)
{
	const MyVector temp = this->cross(vec);
	return temp.x == 0 && temp.y == 0 && temp.z == 0;
}

bool MyVector::isOrthogonal(const MyVector& vec)
{
	return this->dot(vec) == 0;
}

