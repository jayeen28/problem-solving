// Problem link: https://vjudge.net/problem/Aizu-ITP1_3_C

#include <stdio.h>

int main()
{

    while (1)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0)
            break;
        if (a < b)
            printf("%d %d\n", a, b);
        else
            printf("%d %d\n", b, a);
    }

    return 0;
}