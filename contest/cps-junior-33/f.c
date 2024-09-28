// problem link: https://vjudge.net/contest/658693#problem/F

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int freq[N * 3];

    for (int i = 0; i < N * 3; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < N * 3; i++)
    {
        int num;
        scanf("%d", &num);
        if (freq[num - 1] == 0)
        {
            freq[num - 1] = 1;
        }
        else if (freq[num - 1] == 1)
        {
            freq[num - 1] = 2;
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}