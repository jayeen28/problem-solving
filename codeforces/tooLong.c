// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        char str[101];
        scanf("%s", str);
        int length = strlen(str);

        if (length > 10)
        {
            printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
        }
        else
            printf("%s\n", str);
    }
}