#include <iostream>

double func1(int k)
{
	return 1. / (k*k);
}

double func2(int k)
{
	if (k%2 == 0) return 1. / (k*k);
	if (k%2 != 0) return -1. / (k*k);
}

int main()
{
	double sum1 = 0;
	double sum2 = 0;

	for (int i = 1; i <= 1000; i++)
	{
		sum1 += func1(i);
	}

	for (int i = 1; i <= 1000; i++)
	{
		sum2 += func2(i);
	}

	std::cout << "sum1 = " << sum1 << std::endl;
	std::cout << "sum2 = " << sum2 << std::endl;

	return 0;
}
