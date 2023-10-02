
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 1;
    int c = 1;
    int d = 0;
    std::cin >> a;
    for (int i = 1; i <= a - 2; ++i)
    {
        d = b + c;
        b = c;
        c = d;
    }
    std::cout << d;
    std::cout << std::endl;
    return EXIT_SUCCESS;
}