// Problem link: https://vjudge.net/problem/Aizu-ITP1_3_B

#include <stdio.h>

int main()
{
    int c = 1;
    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
            break;
        printf("Case %d: %d\n", c, x);
        c++;
    }

    return 0;
}