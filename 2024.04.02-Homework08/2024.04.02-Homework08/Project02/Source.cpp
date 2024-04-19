#include<iostream>
struct SEdge {
	int a;
	int b;
	int w;
	SEdge(int a = 0, int b = 0, int w = 1) : a(a), b(b), w(w) {}
	SEdge(const SEdge& src) : a(src.a), b(src.b), w(src.w) {}
	~SEdge() {}
	void set(int a, int b, int w)
	{
		this->a = a;
		this->b = b;
		this->w = w;
	}
	friend std::ostream& operator<<(std::ostream& stream, const SEdge& edge);
};
class CGraph 
{

public:

	void inputEdges(int a[101][101]);
	void svetoforchiki(int a[101][101], int n);

private:

	void outputMatrix(int a[101][101], int n);
	void inputMatrix(int a[101][101], int& n);
	void outputEdges(int a[101][101], int n);

};
int main(int argc, char* argv[])
{
	int a[101][101]{ 0 };
	int n = 0;
	CGraph Graph;
	Graph.inputEdges(a);
	Graph.svetoforchiki(a, n);
	return EXIT_SUCCESS;
}
void CGraph::outputMatrix(int a[101][101], int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void CGraph::svetoforchiki(int a[101][101], int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			count += a[i][j];
		}
		std::cout << count << " ";
		count = 0;
	}
}
void CGraph::outputEdges(int a[101][101], int n)
{
	int m = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			m += a[i][j];
		}
	}
	std::cout << n << " " << m << std::endl;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (a[i][j] == 1)
			{
				std::cout << i << " " << j << std::endl;
			}
		}
	}
}
void CGraph::inputEdges(int a[101][101])
{
	int n = 0;
	std::cin >> n;
	int m = 0;
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int s = 0;
		int e = 0;
		std::cin >> s >> e;
		a[s][e] += 1;
		a[e][s] += 1;
	}
	svetoforchiki(a, n);
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