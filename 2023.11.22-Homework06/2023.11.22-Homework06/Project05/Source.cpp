
#include<iostream>

void hanoi(int n, int from, int to);

int main(int argc, char* argv[])
{
    int a = 0;
    std::cin >> a;
    int from = 1;
    int to = 0;
    for (int i = a; i > 0; --i)
    {
        to = (i % 2 == 0 ? 3 : 2);
        hanoi(i, from, to);
        from = to;
    }
    return EXIT_SUCCESS;
}

void hanoi(int n, int from = 1, int to = 3)
{
    if (n == 0)
    {
        return;
    }
    int res = 6 - from - to;
    hanoi(n - 1, from, res);
    std::cout << n << " " << from << " " << to << std::endl;
    hanoi(n - 1, res, to);
}
