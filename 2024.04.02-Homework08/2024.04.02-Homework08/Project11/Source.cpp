#include<iostream>
class CGraph 
{

public:

	void inputMatrix(int a[101][101], int& n);
	bool Regular(int a[101][101], int n);

};
int main(int argc, int argv[])
{
	int a[101][101]{ 0 };
	int n = 0;

	CGraph Graph;

	Graph.inputMatrix(a, n);
	Graph.Regular(a, n);
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

bool CGraph::Regular(int a[101][101], int n)
{
	int power[101] = { 0 };
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			power[i] += a[i][j];
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		if (power[i] != power[1])
		{
			std::cout << "NO";
			return false;
		}
	}
	std::cout << "YES";
	return true;
}
