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
