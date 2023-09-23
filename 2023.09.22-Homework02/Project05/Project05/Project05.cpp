
#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    if ((n % 10 == 1) && (n != 11) && (n != 111) && (n != 211) && (n != 311) && (n != 411) && (n != 511) && (n != 611) && (n != 711) && (n != 811) && (n != 911))
    {
        std::cout << n << " bochka" << std::endl;
    }
    if ((n % 10 == 2) || (n % 10 == 3) || (n % 10 == 4))
    {
        std::cout << n << " bochki" << std::endl;
    }
    if ((n % 10 == 5) || (n % 10 == 6) || (n % 10 == 7) || (n % 10 == 8) || (n % 10 == 9) || (n % 100 == 11) || (n % 10 == 0))
    {
        std::cout << n << " bochek" << std::endl;
    }
    return EXIT_SUCCESS;
}