// Problem link: https://lightoj.com/problem/dimik-even-odd-1
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n = 0;
        scanf("%d", &n);
        if (n % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}