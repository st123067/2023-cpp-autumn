
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    (a == 1) == (b == 1) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
    return EXIT_SUCCESS;
}
