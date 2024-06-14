// Problem link: https://vjudge.net/contest/566680#problem/F
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pattern[3][3] = {{0, 1, 2}, {1, 2, 0}, {2, 0, 1}};
    char input[3];
    scanf("%s", input);
    char x[4], y[4], z[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (i)
            {
            case 0:
                // printf("x i%d j%d p%d %c\n", i, j, pattern[i][j], input[pattern[i][j]]);
                x[j] = input[pattern[i][j]];
                if (j == 2)
                    x[3] = '\0';
                break;
            case 1:
                // printf("y i%d j%d p%d %c\n", i, j, pattern[i][j], input[pattern[i][j]]);
                y[j] = input[pattern[i][j]];
                if (j == 2)
                    y[3] = '\0';
                break;
            case 2:
                // printf("z i%d j%d p%d %c\n", i, j, pattern[i][j], input[pattern[i][j]]);
                z[j] = input[pattern[i][j]];
                if (j == 2)
                    z[3] = '\0';
                break;
            default:
                break;
            }
        }
    };
    int sum = atoi(x) + atoi(y) + atoi(z);
    printf("%d\n", sum);
    return 0;
}