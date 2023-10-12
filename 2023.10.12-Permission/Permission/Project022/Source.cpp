
#include<iostream>

int main(int argc, char argv[])
{
    int n = 0;
    std::cin >> n;
    if (n == 0)
    {
        n = ~ n;
    }
    else
    {
        int start = 31;
        int end = 0;
        while (((n >> start) & 1) == 0)
        {
            start--;
        }
        while (((n >> end) & 1) == 0)
        {
            end++;
        }
        start--;
        end++;
        int mask = 0;
        mask = ~ mask;
        mask = (mask >> (start - end + 1));
        mask = ~vmask;
        mask = (mask >> (32 - start - 1));
        n = n ^ mask;
    }
    std::cout << "0b";

    for (int i = 0; i <= 31; ++i)
    {
        std::cout << (n >> (31 - i) & 1);
    }
    return EXIT_SUCCESS;
}
