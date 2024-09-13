// problem link: https://www.hackerrank.com/contests/cpc-batch-2-module-1-assignment-contest/challenges/class-13-aa-task-2-aa-count-number-of-divisors-i

#include <stdio.h>

int main()
{
    int N, count = 0;
    scanf("%d", &N);
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d ", i);
            count++;
            if (i != N / i)
            {
                printf("%d ", N / i);
                count++;
            }
        }
    }
    printf("\n");
    printf("Total divisors found: %d\n", count);
    return 0;
}