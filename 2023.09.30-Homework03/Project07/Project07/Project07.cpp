
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 1;
    int c = 0;
    c = 2;
    std::cin >> a;
    while (a > c)
    {
        c = c * 2;
        ++b;
    }
    std::cout << b;
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

