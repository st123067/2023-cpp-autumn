
#include<iostream>
#include<cstdlib>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }
    for(int i = 0; i < n; ++i)
    {
        if (*(a + i) < 0)
        {
            for (int j = i; j < n - 1; ++j)
            {
                *(a + i) = *(a + i + 1);
            }
            --n;
        }
    }
    int* b = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        *(b + i) = *(a + i);
    }
    free(a);
    a = b;

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", *(a + i));
    }
	return EXIT_SUCCESS;
}
