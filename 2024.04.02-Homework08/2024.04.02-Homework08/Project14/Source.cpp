#include<iostream>
class CGraph 
{

public:

	void Origins(int a[101][101], int n);
	void Drains(int a[101][101], int n);
	void inputMatrix(int a[101][101], int& n);

};

int main(int argc, int argv[])
{
	int a[101][101]{ 0 };
	int n = 0;
	CGraph Graph;
	Graph.inputMatrix(a, n);
	Graph.Origins(a, n);
	Graph.Drains(a, n);
	return EXIT_SUCCESS;
}

void CGraph::inputMatrix(int a[101][101], int& n)
{
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cin >> a[i][j];
		}
	}
}
void CGraph::Origins(int a[101][101], int n)
{
	bool origin[101]{ 0 };
	int count = 0;
	for (int i = 1; i <= n; ++i)
	{
		origin[i] = true;
		for (int j = 1; j <= n; ++j)
		{
			origin[i] &= a[j][i] == 0;
		}
		count += (int)origin[i];
	}
	std::cout << count << " ";
	for (int i = 1; i <= n; ++i)
	{
		if (origin[i])
		{
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}

void CGraph::Drains(int a[101][101], int n)
{
	bool drain[101]{ 0 };
	int count = 0;
	for (int i = 1; i <= n; ++i)
	{
		drain[i] = true;
		for (int j = 1; j <= n; ++j)
		{
			drain[i] &= a[i][j] == 0;
		}
		count += (int)drain[i];
	}
	std::cout << count << " ";
	for (int i = 1; i <= n; ++i)
	{
		if (drain[i])
		{
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}
