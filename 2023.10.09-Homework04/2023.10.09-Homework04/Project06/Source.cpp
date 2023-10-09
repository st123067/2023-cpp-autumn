
#include<iostream>
#include<cstdlib>

int main(int, char**)
{
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	b = *(a + 0);
	c = *(a + 0);
	for (int j = 0; j < n; ++j)
	{
		if (*(a + j) >= b)
		{
			d = j;
			b = *(a + j);
		}
		if (*(a + j) <= c)
		{
			e = j;
			c = *(a + j);
		}
	}
	b = *(a + e);
	c = *(a + d);
	*(a + d) = b;
	*(a + e) = c;
	for (int k = 0; k < n; ++k)
	{
		std::cout << *(a + k) << " ";
	}
	std::cout << std::endl;
	free(a);
	return EXIT_SUCCESS;
}
