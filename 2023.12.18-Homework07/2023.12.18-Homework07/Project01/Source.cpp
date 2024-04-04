
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>

int main(int argc, char** argv)
{
    FILE* f = fopen("in.txt", "r");
    int count = 0;
    int maxsentence = 0;
    while (!feof(f))
    {
        char c = 0;
        fscanf(f, "%c", &c);
        if ((c == ' ') || (c == '\n'))
        {
            count++;
        }
        if (c == '.')
        {
            if 
        }

    }
    int sum = count + 1;
    fclose(f);
    f = fopen("out.txt", "w");
    fprintf(f, "%d", sum);
    fclose(f);
    return 0;
}
