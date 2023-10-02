
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a;
    for (int i = 1; i <= a; ++i)
    {
        c = 0;
        b = i;
        while (b > 0)
        {
            c = b % 10 + c * 10;
            b = b / 10;
        }
        if (c == i)
        {
            ++d;
        }
    }
    std::cout << d;
    std::cout << std::endl;
    return EXIT_SUCCESS;
}