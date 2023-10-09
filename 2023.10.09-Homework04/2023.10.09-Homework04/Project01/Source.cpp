
#include<iostream>
#include<cstdlib>

int main(int, char**)
{
	int b = 0;
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	for (int j = 0; j < n; ++j)
	{
		if (*(a + j) > 0)
		{
			++b;
		}
	}
	std::cout << b << std::endl;
	free(a);
	return EXIT_SUCCESS;
}
