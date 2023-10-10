
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
	int b = 0;
	for (int j = 0; j < n; ++j)
	{
		b = *(a + 0);
		if (*(a + j ) > b)
		{
			b = *(a + j);
		}
	}
	std::cout << b << std::endl;
	free(a);
	return EXIT_SUCCESS;
}
