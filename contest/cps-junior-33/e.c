// problem link: https://vjudge.net/contest/658693#problem/E

#include <stdio.h>
#include <math.h>
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

int main()
{
    unsigned long long int sum = 0;

    for (int i = 0; i < 64; i++)
    {
        int num;
        scanf("%d", &num);
        if (num == 1)
        {
            sum += (unsigned long long int)pow(2, i);
        }
    }

    printf("%llu\n", sum);

    return 0;
}