#include <iostream>

#include "6.2-error_propagation.hpp"

int main()
{
	ErrorValue a(2, 1);
	ErrorValue b(2, 1);

	ErrorValue c = a + b;

	c.print();

	std::cout << "relative error: " << c.getRelativeError() << std::endl;

	double measurements_a[] = {10.0, 10.2, 10.8, 10.1, 9.6, 10.2, 9.9, 10.3};
	double measurements_b[] = {14.2, 15.0, 13.8, 14.5, 14.8, 14.5, 13.9, 14.1, 14.5, 14.2};
	double measurements_c[] = {11.3, 10.8, 11.1, 11.0, 11.6, 10.8, 10.7, 11.8, 12.0};
	int number_a = 8;
	int number_b = 10;
	int number_c = 9;

	ErrorValue mean_a = mean_a.ErrorValue::fromMeasurements(measurements_a, number_a);
	ErrorValue mean_b = mean_b.ErrorValue::fromMeasurements(measurements_b, number_b);
	ErrorValue mean_c = mean_c.ErrorValue::fromMeasurements(measurements_c, number_c);

	mean_a.print();

	return 0;
}
