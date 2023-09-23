
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    d = a;
    if (d < b)
    {
        d = b;
    }
    if (d < c)
    {
        d = c;
    }
    e = a;
    if (e > b)
    {
        e = b;
    }
    if (e > c)
    {
        e = c;
    }
    f = a + b + c - d - e;
    std::cout << e << " " << f << " " << d << std::endl;
    return EXIT_SUCCESS;
}

