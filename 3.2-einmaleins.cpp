#include <iostream>

int main()
{
	int N;

	std::cout << "Please enter a number" << std::endl;
	std::cin >> N;

	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			int number;
			number = i*j;
			std::cout.width(4);
			std::cout << number;
		}
		std::cout << std::endl;
	}

	return 0;
}
