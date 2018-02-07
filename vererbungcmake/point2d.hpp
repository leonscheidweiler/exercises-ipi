#ifndef POINT_2D_HPP
#define POINT_2D_HPP

class Point2D
{
	public:
		double x;
		double y;

	public:
		Point2D();
		Point2D(double newX, double newY);
		~Point2D();

		void setX(double newX);
		void setY(double newY);

		double getX();
		double getY();

		void print();

		double getDistance(Point2D &otherPoint);
};

#endif
