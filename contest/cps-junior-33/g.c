// problem link: https://vjudge.net/contest/658693#problem/G

#include <stdio.h>

int main()
{

    int N; // number of steps
    scanf("%d", &N);
    int s[N];       // steps speaked
    int totalS = 0; // total stair ways
    int sw[N];      // total steps in stair ways

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &s[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (s[i] == 1)
        {
            if (i > 0)
                sw[totalS - 1] = s[i - 1];

            totalS += 1;
        }
    }
    sw[totalS - 1] = s[N - 1];

    printf("%d\n", totalS);
    for (int i = 0; i < totalS; i++)
    {
        printf("%d ", sw[i]);
    }

    return 0;
}