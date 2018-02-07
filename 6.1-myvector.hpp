#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector
{
	private:
		float x;
		float y;
		float z;

	public:
		MyVector();
		MyVector(float newX, float newY, float newZ);
		~MyVector();

		void print();

		void setValues(float newX, float newY, float newZ);
		void setX(float newX);
		void setY(float newY);
		void setZ(float newZ);

		float getX() const;
		float getY() const;
		float getZ() const;

		float length() const;

		MyVector add(const MyVector& vec);
		MyVector subtract(const MyVector& vec);

		MyVector mult(float scale);
		float dot(const MyVector& vec);
		MyVector cross(const MyVector& vec);

		float angle(const MyVector& vec);
		float area(const MyVector& vec);

		bool isOrthogonal(const MyVector& vec);
		bool isParallel(const MyVector& vec);
};

#endif
