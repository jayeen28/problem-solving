// problem: https://vjudge.net/contest/566680#problem/H
#include <stdio.h>

int main()
{
    int nums[3];
    int n = 3, temp;
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d\n", nums[i]);
        }
        else
        {
            printf("%d ", nums[i]);
        }
    }
    return 0;
}