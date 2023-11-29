
#include<iostream>

void hanoi(int n, int from, int to);

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	hanoi(a, 1, 3);
	return EXIT_SUCCESS;
}

void hanoi(int n, int from = 1, int to = 3)
{
	if (n <= 0)
	{
		return;
	}
	int res = 6 - from - to;

	if (n == 1)
	{
		printf("1 %d %d\n", from, to);
	}
	else
	{
		hanoi(n - 1, from, to);
		hanoi(n - 2, to, res);
		printf("0 %d %d\n", from, to);
		hanoi(n - 2, res, from);
		hanoi(n - 1, from, to);
	}
}
