
#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if (n >= 0)
	{
		for (int i = n; i >= 0; --i)
		{
			std::cout << i << " ";
		}
	}
	if (n < 0)
	{
		for (int i = n; i <= 0; ++i)
		{
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
