#include <iostream>
#define N 10

using namespace std;

int size(int* mas)
{
    for (int i = 0; i < N; i++)
        if (mas[i] == 0)
            return i;
    return N;
}

void reverse(int* mas)
{
    int s = size(mas);
    for (int i = 0; i < s / 2; i++)
        swap(mas[i], mas[s - 1 - i]);
}

void shift(int* rows[], int from, int to)
{
    from--;
    to--;
    int sizes[]{ size(rows[0]), size(rows[1]), size(rows[2]) };
    if (sizes[to] == N || sizes[from] == 0)
        printf("error");
    rows[to][sizes[to]] = rows[from][sizes[from] - 1];
    rows[from][sizes[from] - 1] = 0;
    cout << rows[to][sizes[to]] << ' ' << from + 1 << ' ' << to + 1 << endl;
}

int read_from_console(int* rows[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> rows[0][i];
    reverse(rows[0]);
    cout << endl;
    return n;
}

void solve(int* rows[], int n)
{
    int sizeA = n;
    for (int i = n; i >= 1; i--)
    {
        int k = 0;
        while (rows[0][sizeA - 1 - k] != i)
        {
            shift(rows, 1, 2);
            k++;
        }
        shift(rows, 1, 3);
        while (k-- > 0)
            shift(rows, 2, 1);
        sizeA--;
    }
}

int main()
{
    int A[N]{}, B[N]{}, C[N]{};
    int* rows[]{ A, B, C };
    int n = read_from_console(rows);
    solve(rows, n);
}
