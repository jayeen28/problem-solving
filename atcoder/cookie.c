// problem link: https://atcoder.jp/contests/abc149/tasks/abc149_b
#include <stdio.h>

int main()
{
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (k <= a)
    {
        printf("%lld %lld\n", a - k, b);
    }
    else
    {
        k = k - a;
        if (k <= b)
        {
            printf("0 %lld\n", b - k);
        }
        else
        {
            printf("0 0\n");
        }
    }

    return 0;
}