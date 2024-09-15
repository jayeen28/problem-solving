// problem link: https://atcoder.jp/contests/abc235/tasks/abc235_b

#include <stdio.h>

int main()
{

    int N, ans;
    scanf("%d", &N);
    int plats[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &plats[i]);
    }
    ans = plats[0];

    for (int i = 0; i < N - 1; i++)
    {
        if (plats[i] < plats[i + 1])
        {
            ans = plats[i + 1];
        }
        else
            break;
    }
    printf("%d\n", ans);

    return 0;
}