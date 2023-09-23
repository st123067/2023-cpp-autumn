
#include <iostream>

int main(int argc, char* argv[])
{
    int k = 0;
    int m = 0;
    int n = 0;
    int a = 0;
    std::cin >> k;
    std::cin >> m;
    std::cin >> n;
    if (k >= n)
    {
        a = (m * 2);
    }
    else if (n % k == 0)
    {
        a = (n / k * m * 2);
    }
    else if (n == 0)
    {
        a = 0;
    }
    else
    {
        a = (((n / k + 1 ) * m) * 2);
    }
    std::cout << a << std::endl;
    return EXIT_SUCCESS;
}

