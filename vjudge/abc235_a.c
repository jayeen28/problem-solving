// Problem link: https://vjudge.net/contest/566680#problem/F
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, mid_dec, c, a, b, x, y, z;
    scanf("%d", &input);
    c = input % 10;
    b = (input / 10) % 10;
    a = (input / 100) % 10;
    x = ((a * 10) + b) * 10 + c;
    y = ((b * 10) + c) * 10 + a;
    z = ((c * 10) + a) * 10 + b;
    printf("%d\n", x + y + z);
    return 0;
}