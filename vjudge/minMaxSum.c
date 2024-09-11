// Problem link: https://vjudge.net/problem/Aizu-ITP1_4_D

#include <stdio.h>

int main()
{
    int min, max, N;
    long long int sum = 0;
    min = 1000001;
    max = -1000001;
    scanf("%d", &N);
    while (N--)
    {
        int num;
        scanf("%d", &num);
        if (num < min)
            min = num;
        if (num > max)
            max = num;
        sum += num;
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}