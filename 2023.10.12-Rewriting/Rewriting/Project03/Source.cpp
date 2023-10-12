
#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a = 0;
	a = 1;
	while (n != 0)
	{
		a = a * (n % 10);
		n = n / 10;
	}
	std::cout << a << std::endl;
	return EXIT_SUCCESS;
}
