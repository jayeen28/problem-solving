#include <stdio.h>

int main()
{
    int n, position;
    scanf("%d%d", &n, &position);
    int result = (n >> position) & 1;
    printf("%d\n", result);
    return 0;
}