// problem: https://vjudge.net/contest/658693#problem/D

#include <stdio.h>

int main()
{
    int N, c = 0;
    scanf("%d", &N);
    char str[N];
    scanf("%s", str);
    char res[N * 2 + 1];
    res[N * 2 + 1] = '\0';

    for (int i = 0; i < N; i++)
    {
        res[c] = str[i];
        res[c + 1] = str[i];
        c += 2;
    }

    printf("%s", res);

    return 0;
}