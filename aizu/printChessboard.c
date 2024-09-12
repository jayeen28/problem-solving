// problem link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_C

#include <stdio.h>

int main()
{
    while (1)
    {
        int H, W;
        scanf("%d %d", &H, &W);
        if (H == 0 || W == 0)
            break;
        for (int i = 1; i <= H; i++)
        {

            for (int j = 1; j <= W; j++)
            {
                if ((j % 2 == 0 && i % 2 == 0) || (j % 2 != 0 && i % 2 != 0))
                    printf("#");
                else
                    printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}