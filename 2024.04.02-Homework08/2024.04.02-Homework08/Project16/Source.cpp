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
	CGraph(int vertexes);
	void ReadMatrix();
	int PlaceTracker(int a, int b);

private:
	void initMatrix();
	void dispose();

	int _vertexes;
	int** _matrix;
};

int main(int argc, char* argv[]) {
	int vertexes = 0;
	std::cin >> vertexes;
	CGraph graph(vertexes);
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	graph.ReadMatrix();
	std::cout << graph.PlaceTracker(a - 1, b - 1) << std::endl;
	return EXIT_SUCCESS;
}
int CGraph::PlaceTracker(int a, int b) {
	while (a != b) {
		if (a > b) {
			for (int i = 0; i < _vertexes; ++i) {
				if (_matrix[a][i] == 1) {
					a = i;
				}
			}
		}
		else {
			for (int i = 0; i < _vertexes; ++i) {
				if (_matrix[b][i] == 1) {
					b = i;
				}
			}
		}
	}
	return a + 1;
}