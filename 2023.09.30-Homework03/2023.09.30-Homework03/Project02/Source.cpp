
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a;
    b = a;
    if (b % 10 == 0)
    {
        while (b % 10 == 0)
        {
            b = b / 10;
        }
    }
    while (b != 0)
    {
        std::cout << b % 10;
        b = b / 10;
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}