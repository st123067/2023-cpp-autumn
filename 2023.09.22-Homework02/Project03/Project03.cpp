
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int x = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    if ((a == 0) && (b == 0))
    {
        std::cout << "INF" << std::endl;
    }
    else if (abs(b) % a == 0)
    {
        x = -b / a;
        std::cout << x << std::endl;
    }
    else if ((b * c == a * d) || (a == 0))
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return EXIT_SUCCESS;
}

