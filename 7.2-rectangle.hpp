#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle()
{
	protected:
		double width;
		double height;

	public:
		Rectangle();
		Rectangle(double width, double height);
		~Rectangle();

		void setWidth(double w);
		void setHeight(double h);

		double getWidth() const;
		double getHeight() const;

		double getArea() const;
		double getCircumference() const;
};

#endif
