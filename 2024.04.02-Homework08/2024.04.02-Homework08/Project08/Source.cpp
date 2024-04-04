#include<iostream>
class CGraph 
{

public:

	void input(int a[101][101], int& n);
	void output(int a[101][101], int n);

};
int main(int argc, int argv[])
{
	int a[101][101]{ 0 };
	int n = 0;
	CGraph Graph;
	Graph.input(a, n);
	Graph.output(a, n);
	return EXIT_SUCCESS;
}
void CGraph::input(int a[101][101], int& n)
{
	int edges = 0;
	std::cin >> n;
	std::cin >> edges;
	for (int i = 1; i <= edges; ++i)
	{
		int nach = 0;
		int end = 0;
		std::cin >> nach;
		std::cin >> end;
		a[nach][end] = 1;
	}
}

void CGraph::output(int a[101][101], int n)
{
	std::cout << n << std::endl;
	for (int i = 1; i <= n; ++i)
	{
		int count = 0;
		for (int j = 1; j <= n; ++j)
		{
			count += a[i][j];
		}
		std::cout << count << " ";
		for (int j = 1; j <= n; ++j)
		{
			if (a[i][j] == 1)
			{
				std::cout << j << " ";
			}
		}
		std::cout << std::endl;
	}
}
