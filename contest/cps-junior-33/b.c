// problem link: https://vjudge.net/contest/658693#problem/B

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int r, b;
        scanf("%d %d", &r, &b);
        if (r == b)
            printf("ANY\n");
        else if (r < b)
            printf("REPAIR\n");
        else
            printf("NEW PHONE\n");
    }

    return 0;
}