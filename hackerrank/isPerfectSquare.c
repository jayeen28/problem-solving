// problem link: https://www.hackerrank.com/contests/cpc-batch-2-module-1-assignment-contest/challenges/class-13-aa-task-1-aa-is-perfect-square-i

#include <stdio.h>
#include <stdbool.h>

int main()
{

    long long N;

    scanf("%lld", &N);
    bool found = false;
    for (long long i = 1; i * i <= N; i++)
    {
        if (i * i == N)
        {
            printf("%lld is perfect square\n", N);
            found = true;
        }
    }
    if (!found)
        printf("%lld is not perfect square\n", N);

    return 0;
}