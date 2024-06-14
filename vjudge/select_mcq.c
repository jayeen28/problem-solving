// problem: https://vjudge.net/contest/566680#problem/G
#include <stdio.h>

int main()
{
    int total = 6;
    int c_1;
    int c_2;
    scanf("%d", &c_1);
    scanf("%d", &c_2);
    printf("%d\n", total - (c_1 + c_2));
    return 0;
}