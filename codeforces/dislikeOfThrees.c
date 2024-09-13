// problem link: https://codeforces.com/contest/1560/problem/A

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    while (N--)
    {
        int pos;
        scanf("%d", &pos);
        int it_pos = 0;
        int last_num;
        for (int i = 1; it_pos < pos; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                last_num = i;
                it_pos++;
            }
        }
        printf("\n%d", last_num);
    }
    printf("\n");

    return 0;
}