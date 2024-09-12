// problem link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_A

#include <stdio.h>

int main()
{
    while (1)
    {
        int H, W;
        scanf("%d %d", &H, &W);
        if (H == 0 || W == 0)
            break;
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}