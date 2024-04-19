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

	void inputEdges(int a[101][101], int& n);
	bool Full(int a[101][101], int n);

};

int main(int argc, int argv[])
{
	int a[101][101]{ 0 };
	int n = 0;

	CGraph Graph;

	Graph.inputEdges(a, n);
	Graph.Full(a, n);
	return EXIT_SUCCESS;
}

void CGraph::inputEdges(int a[101][101], int& n)
{
	std::cin >> n;
	int m = 0;
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int s = 0;
		int e = 0;
		std::cin >> s >> e;
		a[s][e] += 1;
	}
}

bool CGraph::Full(int a[101][101], int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = i + 1; j <= n; ++j)
		{
			if (a[i][j] + a[j][i] == 0)
			{
				std::cout << "NO";
				return false;
				break;
			}
		}
	}
	std::cout << "YES";
	return true;
}
