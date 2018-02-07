#ifndef ERROR_PROPAGATION_HPP
#define ERROR_PROPAGATION_HPP

class ErrorValue
{
	private:
		double value;
		double error;

	public:
		ErrorValue();
		ErrorValue(double newValue, double newError);
		~ErrorValue();

		void print();

		void setErrorValue(double newValue, double newError);
		void setValue(double newValue);
		void setError(double newError);

		double getValue();
		double getError();
		double getRelativeError();

		ErrorValue operator+(const ErrorValue b);

		ErrorValue fromMeasurements(double* values, int number);
};

#endif
