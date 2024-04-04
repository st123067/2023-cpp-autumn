#include <iostream>
class CGraph 
{
public:
	void outputPower(int a[101][101], int n);
	void inputMatrix(int a[101][101], int& n);
};
int main(int argc, char* argv[])
{
	int a[101][101]{ 0 };
	int n = 0;

	CGraph graph;

	graph.inputMatrix(a, n);
	graph.outputPower(a, n);

	return EXIT_SUCCESS;
}

void CGraph::outputPower(int a[101][101], int n)
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
		std::cout << power[i] << " ";
	}
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
