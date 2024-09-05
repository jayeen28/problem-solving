// Problem link: https://atcoder.jp/contests/abc149/tasks/abc149_b
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1, s2, t1, t2;
    scanf("%c%c %c%c", &s1, &s2, &t1, &t2);
    int dist1 = abs(s2 - s1);
    if (dist1 > 2)
        dist1 = 5 - dist1;
    int dist2 = abs(t2 - t1);
    if (dist2 > 2)
        dist2 = 5 - dist2;
    if (dist1 == dist2)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}