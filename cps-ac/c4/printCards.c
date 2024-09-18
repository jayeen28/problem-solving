#include <stdio.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int nums[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = N - K; i < N; i++)
    {
        printf("%d ", nums[i]);
    }
    for (int i = 0; i < N - K; i++)
    {
        printf("%d ", nums[i]);
    }
}