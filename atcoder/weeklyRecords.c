// problem link: https://atcoder.jp/contests/abc307/tasks/abc307_a

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int steps[7 * N];

    for (int i = 0; i < N * 7; i++)
    {
        scanf("%d", &steps[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int sum = 0;

        for (int j = 7 * i; j < 7 * (i + 1); j++)
        {
            sum += steps[j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}