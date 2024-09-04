#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int result = n ^ (1 << 2);
    printf("%d\n", result);
    return 0;
}