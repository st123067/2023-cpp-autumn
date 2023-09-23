
#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    std::cin >> n;
    a = n / 60;
    b = (n % 60) / 20;
    c = ((n % 60) % 20) / 10;
    d = (((n % 60) % 20) % 10) / 5;
    e = ((((n % 60) % 20) % 10) % 5);
    std::cout << e << " " << d << " " << c << " " << b << " " << a << std::endl;
    return EXIT_SUCCESS;
}
