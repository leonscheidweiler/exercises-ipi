#include <iostream>

int pp()
{
	int* a = new int;
	*a = 5;
	return *a;
}

bool is_large_number(int z)
{
	bool ret(false);
	if (z > 1000)
		ret = true;
	return ret;
}

int quad_array(int n)
{
	int* z = new int[n];
	for (int i = 0; i < n; i++)
	{
		z[i] = i*i;
	}
	int ret = z[n-1];
	delete[] z;
	return ret;
}

int* set_variable(int z)
{
	int* n = new int;
	*n = z;
	int* temp = n;
	delete n;
	return temp;
}

float* lv(float &f)
{
	f *= 2.0;
	return &f;
}


int main()
{
	std::cout << pp() << std::endl;
	std::cout << is_large_number(4) << std::endl;
	std::cout << quad_array(4) << std::endl;
	std::cout << set_variable(4) << std::endl;
	float f = 4.12;
	float* ptr_f = &f;
	std::cout << ptr_f << std::endl;
	std::cout << lv(f) << std::endl;

	return 0;
}
