#include <iostream>

int sum(int n)
{
	if (n == 1)
		return 1;
	else
	{
		return n + sum(n-1);
	}
}

void convert_decimal(int num, int base)
{
	if (num == 0)
		return;
	convert_decimal(num / base, base);
	std::cout << num % base;
}

int square(int num)
{
	return num*num;
}

int power(int num, int exponent)
{
	if (exponent == 1)
		return num;
	else if (exponent%2 == 0)
	{
		int temp = power(num, exponent/2);
		return square(temp);
	}
	else
		return num * power(num, exponent-1);
}

int main()
{
	std::cout << sum(4) << std::endl;
	
	convert_decimal(1278, 2);
	std::cout << std::endl;

	convert_decimal(1278, 8);
	std::cout << std::endl;

	std::cout << power(2, 16) << std::endl;

	return 0;
}
