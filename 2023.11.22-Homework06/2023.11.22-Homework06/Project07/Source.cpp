
#include<iostream>

void shift(int from, int to);

void hanoi(int n, int from, int to);

void sort();

int a[4]{ 0 };
int** b = new int* [4] {nullptr, new int[10], new int[10], new int[10]};

int main(int argc, char* argv[])
{
    std::cin >> a[1];
    for (int i = a[1] - 1; i >= 0; --i)
    {
        std::cin >> b[1][i];
    }
    sort();
    for (int i = a[1] - 1; i >= 0; --i)
    {
        hanoi(a[1], 1, 2);
    }
    return EXIT_SUCCESS;
}

void shift(int from = 1, int to = 3)
{
    std::cout << b[from][a[from] - 1] << " " << from << " " << to << std::endl;
    b[to][a[to]++] = b[from][--a[from]];
}

void hanoi(int n, int from = 1, int to = 3)
{
    if (n == 0)
    {
        return;
    }
    int res = 6 - from - to;
    hanoi(n - 1, from, res);
    shift(from, to);
    hanoi(n - 1, res, to);
}

void sort()
{

}
