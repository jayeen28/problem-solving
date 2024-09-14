// problem link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_A

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int nums[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d", nums[i]);
        if (i != 0)
            printf(" ");
    }
    printf("\n");
    return 0;
}