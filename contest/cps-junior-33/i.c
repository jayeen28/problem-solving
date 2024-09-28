// problem link: https://vjudge.net/contest/658693#problem/I

#include <stdio.h>

int main()
{
    int N, rmv = 0;
    scanf("%d", &N);
    int nums[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int found = 0;
        for (int j = 0; j < N; j++)
        {
            if (i != j)
            {
                int x = nums[i] + nums[j];
                if ((x & (x - 1)) == 0)
                {
                    found = 1;
                    break;
                }
            }
            else
                continue;
        }
        if (found == 0)
            rmv++;
    }
    printf("%d\n", rmv);
    return 0;
}