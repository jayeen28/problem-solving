// problem link: https://cses.fi/problemset/task/1083

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int freq[N];

    for (int i = 0; i < N - 1; i++)
    {
        int in;
        scanf("%d", &in);
        if (i == 0)
            freq[i - 1] = 0;
        freq[in - 1] += 1;
    }

    for (int i = 0; i < N; i++)
    {
        if (freq[i] == 0)
        {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}