#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std:: cin >> b;
	std::cout << (a * b % 109 + 109) % 109 + 1 << std::endl;
	return EXIT_SUCCESS;
}