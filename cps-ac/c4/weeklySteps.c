#include <stdio.h>

int main()
{

    int N;
    long long sum = 0;
    scanf("%d", &N);
    int steps[N * 7];

    for (int i = 0; i < N * 7; i++)
    {
        scanf("%d", &steps[i]);
    }

    for (int i = 0; i < N * 7; i++)
    {
        sum += steps[i];
        if ((i + 1) % 7 == 0)
        {
            printf("%lld ", sum);
            sum = 0;
        }
    }

    return 0;
}