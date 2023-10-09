
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
	for (int j = n - 1; j >= 0; --j)
	{
			std::cout << *(a + j) << " ";
	}
	std::cout << std::endl;
	free(a);
	return EXIT_SUCCESS;
}
