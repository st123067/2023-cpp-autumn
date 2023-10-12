
#include<iostream>

int main(int argc, int argv[])
{
    int n = 0;
    int s = 0;
    std::cin >> n;
    for (int i = 0; i < 32; ++i)
    {
        s += (n >> i) & 1;
    }
    std::cout << s;
    return EXIT_SUCCESS;
}
