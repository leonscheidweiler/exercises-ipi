#include <iostream>

void swap1(double a, double b)
{
	// swaps variables but only in this scope
	double temp = a;
	a = b;
	b = a;
}

void swap2(double &a, double &b)
{
	//swaps value of pointers around
	double temp = a;
	a = b;
	b = temp;
}

void swap3(double *a, double *b)
{
	// swaps around values of pointers
	double temp = *a;
	*a = *b;
	*b = temp;
}

double* maximum_value(double* a, int size)
{
	if (size==0)
	{
		return NULL;
	}

	else
	{
		double* max = &a[0];
		for(int index = 0; index < size; index++)
		{
			if(a[index] >= *max)
			{
				max = &a[index];
			}
		}
		return max;
	}
}

int length_string(const char* str)
{
	int i = 0;
	while(str[i] != 0)
		i++;
	return i;
}

void swap(char& c1, char& c2)
{
	char temp = c1;
	c1 = c2;
	c2 = temp;
}

void reverse_string(char* str)
{
	int len = length_string(str);
	if (len == 0)
		return;
	for(int i = 0; i < len / 2; i++)
		swap(str[i], str[len - i - 1]);
}

int main()
{
	double a1 = 15;
	double a2 = 20;

	double* p1 = &a1;
	double* p2 = &a2;

	// test of swap1()
	double a = 7;
	double b = 12;
	swap1(a, b);
	std::cout << a << " " << b << std::endl;

	// test of swap2()
	a = 7;
	b = 12;
	swap2(a, b);
	std::cout << a << " " << b << std::endl;

	// test of swap3()
	a = 7;
	b = 12;
	double* ptr_a = &a;
	double* ptr_b = &b;
	swap3(ptr_a, ptr_b);
	std::cout << a << " " << b << std::endl;

	// maxvslue
	double vector[5] = {1., 4., 12., 3., 5.};
	double* maxvector = maximum_value(vector, 5);
	std::cout << *maxvector << std::endl;

	std::cout << length_string("This is a long sentence") << std::endl;

	char name[] = "Leon";
	reverse_string(name);
	std::cout << name << std::endl;

	return 0;
}
