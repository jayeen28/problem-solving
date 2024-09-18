#include <stdio.h>

int main()
{
    int N, M, sum = 0;
    scanf("%d %d", &N, &M);
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < M; i++)
    {
        int solved;
        scanf("%d", &solved);
        sum += scores[solved - 1];
    }
    printf("%d\n", sum);
}