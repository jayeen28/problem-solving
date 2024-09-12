// problem link: https://atcoder.jp/contests/abc151/tasks/abc151_b?lang=en&fbclid=IwZXh0bgNhZW0CMTEAAR0aTUJObTgHWoKF9jcxezdAeXNxqToOF4iahTCxkoZ2_UHW9M9vlmJ4gyg_aem_FXPv9bYOrEmapAyf5lUHNg

#include <stdio.h>

int main()
{
    int N, max_mark, avg_mark, mark_need = 0, achieved = 0;
    scanf("%d %d %d", &N, &max_mark, &avg_mark);
    for (int i = 0; i < N - 1; i++)
    {
        int mark;
        scanf("%d", &mark);
        achieved += mark;
    }
    mark_need = N * avg_mark - achieved;
    if (mark_need < 0)
        printf("0\n");
    else if (mark_need > max_mark)
        printf("-1\n");
    else
        printf("%d\n", mark_need);

    return 0;
}