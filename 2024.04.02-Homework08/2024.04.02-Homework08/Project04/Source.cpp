#include<iostream>
class CGraph {
public:

    void inputMatrix(int a[101][101], int& n);
    int miniroad(int a[101][101], int n);

private:

};
int main(int argc, char* argv[])
{
    int a[101][101]{ 0 };
    int n = 0;
    CGraph graph;
    graph.inputMatrix(a, n);
    std::cout << graph.miniroad(a, n) << std::endl;
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
int CGraph::miniroad(int a[101][101], int n)
{
    int miniroad = 3000;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            for (int k = 1; k <= n; ++k)
            {
                if ((i != j) && (j != k) && (i != k))
                {
                    miniroad = std::min(miniroad, a[i][j] + a[j][k] + a[i][k]);
                }
            }
        }
    }
    return miniroad;
}