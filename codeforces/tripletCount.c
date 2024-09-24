// problem link: https://codeforces.com/problemset/problem/304/A

#include <stdio.h>
#include <stdbool.h>

bool isPerSq[100000001] = {false};

int main()
{
    int N, cnt = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        isPerSq[i * i] = true;
    }

    for (int a = 1; a <= N; a++)
    {
        for (int b = a; b <= N; b++)
        {
            int csq = a * a + b * b;
            if (csq <= N * N && isPerSq[csq])
                cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}