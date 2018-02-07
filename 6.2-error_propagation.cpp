#include <iostream>
#include <cmath>

#include "6.2-error_propagation.hpp"

ErrorValue::ErrorValue()
{
	value = 0;
	error = 0;
}

ErrorValue::ErrorValue(double newValue, double newError)
{
	value = newValue;
	error = newError;
}

ErrorValue::~ErrorValue()
{

}

void ErrorValue::print()
{
	std::cout << this->value << " +/- " << this->error << std::endl;
}

void ErrorValue::setErrorValue(double newValue, double newError)
{
	this->value = newValue;
	this->error = newError;	
}

void ErrorValue::setValue(double newValue)
{
	this->value = newValue;
}

void ErrorValue::setError(double newError)
{
	this->error = newError;
}

double ErrorValue::getValue()
{
	return this->value;
}

double ErrorValue::getError()
{
	return this->error;
}

double ErrorValue::getRelativeError()
{
	return this->error/this->value;
}

ErrorValue ErrorValue::operator+(const ErrorValue b)
{
	return ErrorValue(this->value + b.value,
		   sqrt(pow(this->error, 2) + (pow(b.error, 2))));
}

ErrorValue ErrorValue::fromMeasurements(double* values, int number)
{
	double mean = 0;
	for (int index = 0; index < number ; index++)
	{
		mean += values[index];
	}
	mean /= number;

	double stdev = 0;
	double temp_sum = 0;
	for (int index = 0; index < number; index++)
	{
		temp_sum += pow(values[index] - mean, 2);
	}
	stdev = sqrt(temp_sum/(number-1));

	return ErrorValue(mean, stdev);
}
