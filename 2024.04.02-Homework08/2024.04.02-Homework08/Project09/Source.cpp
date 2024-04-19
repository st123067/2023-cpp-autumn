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

	void input(int a[101][101], int& n);
	void outputMatrix(int a[101][101], int n);

};

void CGraph::input(int a[101][101], int& n)
{
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int edges = 0;
		std::cin >> edges;
		for (int j = 0; j < edges; ++j)
		{
			int end = 0;
			std::cin >> end;
			a[i][end] = 1;
		}
	}
}

void CGraph::outputMatrix(int a[101][101], int n)
{
	std::cout << n << std::endl;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main(int argc, int argv[])
{
	int a[101][101]{ 0 };
	int n = 0;

	CGraph Graph;

	Graph.input(a, n);
	Graph.outputMatrix(a, n);
	return EXIT_SUCCESS;
}