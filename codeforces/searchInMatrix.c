// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int N, M, X;
    scanf("%d %d", &N, &M);
    int numbers[N][M];
    bool found = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }
    scanf("%d", &X);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (numbers[i][j] == X)
            {
                found = true;
                break;
            }
        }
    }

    if (found)
        printf("will not take number\n");
    else
        printf("will take number\n");
}