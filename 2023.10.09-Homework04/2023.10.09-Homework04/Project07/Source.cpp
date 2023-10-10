
#include<iostream>
#include<cstdlib>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	int d = 0;
	for (int j = 0; j < n; ++j)
	{
		if (*(a + j) > 0)
		{
			++d;
		}
	}
	int c = 0;
	c = d;

	int* e = (int*)malloc(sizeof(int) * n);
	for (int k = 0; k < d; ++k)
	{
		if (*(a + k) > 0)
		{
			*(e + k) = *(a + k);
		}
	}
	for (int f = 0; f < c; ++f)
	{
		std::cout << *(e + f) << " ";
	}
	free(a);
	free(e);
	return EXIT_SUCCESS;
}
