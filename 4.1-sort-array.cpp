#include <iostream>

int main()
{
	int array[] = {12, 6, 10, 2, 1, 22, 4, 16, 12, 7};

	int len = sizeof(array)/sizeof(int);

	for (int i = 0; i < len; i++)
	{
		std::cout.width(4);
		std::cout << array[i];
	}
	std::cout << std::endl;


	for (int i = 0; i < len; i++)
	{
		int posmin = i;
		int valmin = array[i];
		for (int j = i; j < len; j++)
		{
			if (array[j] < valmin)
			{
				posmin = j;
				valmin = array[j];
			}
		}
		int temp = array[i];
		array[i] = array[posmin];
		array[posmin] = temp;
	}

	for (int i = 0; i < len; i++)
	{
		std::cout.width(4);
		std::cout << array[i];
	}
	std::cout << std::endl;
}
