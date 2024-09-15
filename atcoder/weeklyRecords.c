// problem link: https://atcoder.jp/contests/abc307/tasks/abc307_a

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int steps[7 * N], sum = 0;

    for (int i = 0; i < N * 7; i++)
    {
        scanf("%d", &steps[i]);
    }

    for (int i = 1; i <= N * 7; i++)
    {
        sum += steps[i - 1];
        if (i % 7 == 0)
        {
            printf("%d ", sum);
            sum = 0;
        }
    }
    printf("\n");

    return 0;
}