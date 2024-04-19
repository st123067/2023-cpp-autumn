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
	void Evolution(int n, int first, int second);
};
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int first = 0;
	std::cin >> first;
	int second = 0;
	std::cin >> second;
	CGraph Graph;
	Graph.Evolution(n, first, second);
	return EXIT_SUCCESS;
}
	 void CGraph::Evolution(int n, int first, int second)
	{
		while (first != second)
		{
			if (first > second)
			{
				first = first >> 1;
			}
			else
			{
				second = second >> 1;
			}
		}
		std::cout << first;
	}