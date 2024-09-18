// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, d1 = 0, d2 = 0;
    scanf("%d", &N);

    int numbers[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                d1 += numbers[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = N; j >= 0; j--)
        {
            if (i == (N - 1) - j)
                d2 += numbers[i][j];
        }
    }
    printf("%d\n", abs(d1 - d2));
}