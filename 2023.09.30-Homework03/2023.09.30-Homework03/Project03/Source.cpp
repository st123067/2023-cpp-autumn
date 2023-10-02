
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 1;
    std::cin >> a;
    while (c <= a)
    {
        if (a % c == 0)
        {
            ++b;
        }
        ++c;
    }
    std::cout << b;
    std::cout << std::endl;
    return EXIT_SUCCESS;
}