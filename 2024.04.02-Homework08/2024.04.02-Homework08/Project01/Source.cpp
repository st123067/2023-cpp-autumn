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

};

int main(int argc, char* argv[])
{
    int a[101][101]{ 0 };
    int n = 0;
    int count = 0;
    CGraph graph;
    graph.inputMatrix(a, n);
    return EXIT_SUCCESS;
}
void CGraph::inputMatrix(int a[101][101], int& n)
{
    int count = 0;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            std::cin >> a[i][j];
            count += a[i][j];
        }
    }
    std::cout << count / 2 << std::endl;
}
