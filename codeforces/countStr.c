// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 0;
    char inp[1000001];
    scanf("%s", inp);

    for (int i = 0; i < strlen(inp); i++)
    {
        sum += (inp[i] - '0');
    }
    printf("%d\n", sum);

    return 0;
}