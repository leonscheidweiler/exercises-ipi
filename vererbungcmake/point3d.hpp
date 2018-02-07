#ifndef POINT_3D_HPP
#define POINT_3D_HPP

#include "point2d.hpp"

class Point3D : public Point2D
{
	private:
		double z;

	public:
		Point3D();
		Point3D(double newX, double newY, double newZ);
		~Point3D();

		void setZ(double newZ);

		double getZ();

		void print();

		double getDistance(Point3D &otherPoint);
};

#endif
