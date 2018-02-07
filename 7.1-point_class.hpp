#ifndef POINT_CLASS_HPP
#define POINT_CLASS_HPP

class Point2D
{
	protected:
		double x;
		double y;

	public:
		Point2D();
		Point2D(double newX, double newY);
		~Point2D();

		void print();

		void setX(double newX);
		void setY(double newY);

		double getX() const;
		double getY() const;

		double calcDistance(const Point2D& newPoint) const;
};

class Point3D : public Point2D
{
	private:
		double z;

	public:
		Point3D();
			Point3D(double newX, double newY, double newZ);
		~Point3D();

		void print();

		void setZ(double newZ);
		
		double getZ() const;

		double calcDistance(const Point3D& newPoint) const;
};

#endif
