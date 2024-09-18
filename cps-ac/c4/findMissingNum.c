#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int nums[N];

    for (int i = 0; i < N - 1; i++)
    {
        int in;
        scanf("%d", &in);
        nums[in - 1] = in;
    }

    for (int i = 0; i < N; i++)
    {
        if (nums[i] != i + 1)
        {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}