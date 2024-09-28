// problem link: https://vjudge.net/contest/658693#google_vignette

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    while (N--)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > 98)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}