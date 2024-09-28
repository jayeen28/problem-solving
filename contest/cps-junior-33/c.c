// problem link: https://vjudge.net/contest/658693#problem/C

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int balls, boxes;
        scanf("%d %d", &balls, &boxes);
        for (int i = 1; i <= boxes; i++)
        {
            balls -= i;
        }
        if (balls >= 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}