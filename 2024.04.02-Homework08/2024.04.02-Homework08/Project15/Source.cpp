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
    bool Tour(int a[101][101], int n);
};
int main(int argc, char* argv[])
{
    int a[101][101]{ 0 };
    int n = 0;
    CGraph graph;
    graph.inputEdges(a, n);
    std::cout << ((graph.Tour(a, n)) ? "YES" : "NO") << std::endl;
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
bool CGraph::Tour(int a[101][101], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (a[i][i] == 1)
        {
            return false;
        }
        for (int j = i + 1; j <= n; ++j)
        {
            if (a[i][j] + a[j][i] != 1)
            {
                return false;
            }
        }
    }
    return true;
}