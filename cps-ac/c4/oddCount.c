#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, odds = 0;
        scanf("%d", &N);
        int nums[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &nums[i]);
        }

        for (int i = 0; i < N; i++)
        {
            odds += nums[i] % 2;
        }
        printf("%d\n", odds);
    }
}