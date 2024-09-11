// problem link: https://lightoj.com/problem/opposite-task

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int num;
        scanf("%d", &num);
        if (num <= 10)
        {
            printf("%d %d\n", 0, num);
        }
        else
        {
            int rest = num - 10;
            printf("%d %d\n", rest, num - rest);
        }
    }
    return 0;
}