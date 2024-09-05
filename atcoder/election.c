// problem link: https://atcoder.jp/contests/abc366/tasks/abc366_a
#include <stdio.h>

int main()
{
    int N, T, A, B;
    scanf("%d%d%d", &N, &T, &A);
    B = N - (T + A);
    if (B + T < A || B + A < T)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}