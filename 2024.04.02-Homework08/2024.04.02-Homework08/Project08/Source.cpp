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
