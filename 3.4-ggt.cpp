#include <iostream>

int find_ggt(int a, int b)
{
	if (a==0)
	{
		return b;
	}

	else if (b==0)
	{
		return a;
	}

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

int main()
{
	int a;
	int b;

	std::cout << "enter a number: " << std::endl;
	std::cin >> a;

	std::cout << "enter a number: " << std::endl;
	std::cin >> b;

	int ggt = find_ggt(a, b);
	std::cout << "The ggT of " << a << " and " << b << " is " << ggt << std::endl;

	return 0;
}
