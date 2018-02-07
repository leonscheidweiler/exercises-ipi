#include <iostream>

int find_ggt(int a, int b)
{
	if (a < 0) a = -a;
	if (b < 0) b = -b;

	if (a==0) return b;
	else if (b==0) return a;
	else if (a > b)
	{
		a -= b;
		return find_ggt(a, b);
	}
	else
	{
		b -= a;
		return find_ggt(a, b);
	}
}

struct Fraction
{
	int numerator;
	int denominator;
};

void reduce(Fraction& frac)
{
	int temp = find_ggt(frac.numerator, frac.denominator);
	frac.numerator /= temp;
	frac.denominator /= temp;
}


Fraction sum(Fraction frac1, Fraction frac2)
{
	Fraction fractemp;
	fractemp.numerator = frac1.numerator;
	fractemp.denominator = frac1.denominator;

	frac1.numerator *= frac2.denominator;
	frac1.denominator *= frac2.denominator;

	frac2.numerator *= fractemp.denominator;
	frac2.denominator *= fractemp.denominator;

	Fraction frac3;
	frac3.numerator = frac1.numerator + frac2.numerator;
	frac3.denominator = frac1.denominator;

	reduce(frac3);

	return frac3;
}

Fraction antisum(Fraction frac1, Fraction frac2)
{
	Fraction fractemp;
	fractemp.numerator = frac1.numerator;
	fractemp.denominator = frac1.denominator;

	frac1.numerator *= frac2.denominator;
	frac1.denominator *= frac2.denominator;

	frac2.numerator *= fractemp.denominator;
	frac2.denominator *= fractemp.denominator;

	Fraction frac3;
	frac3.numerator = frac1.numerator - frac2.numerator;
	frac3.denominator = frac1.denominator;

	reduce(frac3);

	return frac3;
}

Fraction mult(Fraction frac1, Fraction frac2)
{
	Fraction frac3;

	frac3.numerator = frac1.numerator * frac2.numerator;
	frac3.denominator = frac1.denominator * frac2.denominator;
	
	reduce(frac3);

	return frac3;
}

Fraction reciprocal(Fraction frac1)
{
	int temp = frac1.numerator;
	frac1.numerator = frac1.denominator;
	frac1.denominator = temp;

	return frac1;
}

double decimal(Fraction frac1)
{
	double temp = double(frac1.numerator) / frac1.denominator;
	return temp;
}

void print(Fraction frac)
{
	std::cout << frac.numerator << "/" << frac.denominator << std::endl;
}

int main()
{
	std::cout << "Hey there" << std::endl;

	Fraction frac1 = {12, 53};
	Fraction frac2 = {3, 4};
	Fraction frac3 = {1, 2};
	Fraction frac4 = {1, 5};

	std::cout << "Printing input fractions" << std::endl;
	print(frac1);
	print(frac2);
	print(frac3);
	print(frac4);
	std::cout << std::endl;

	Fraction temp1 = mult(frac2, frac3);
	Fraction temp2 = antisum(frac1, temp1);
	Fraction temp3 = reciprocal(frac4);
	
	Fraction fracout = mult(temp2, temp3);	

	std::cout << "Printing final fraction" << std::endl;
	print(fracout);
	std::cout << decimal(fracout) << std::endl;

	return 0;
}
