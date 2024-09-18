// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

#include <stdio.h>

int main()
{

    int N, M;
    scanf("%d %d", &N, &M);

    int numbers[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = M - 1; j >= 0; j--)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}