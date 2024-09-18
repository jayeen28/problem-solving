#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int freq[N];

    for (int i = 0; i < N; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < (N * 4) - 1; i++)
    {
        int num;
        scanf("%d", &num);
        freq[num - 1] += 1;
    }

    for (int i = 0; i < N; i++)
    {
        if (freq[i] < 4)
        {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}