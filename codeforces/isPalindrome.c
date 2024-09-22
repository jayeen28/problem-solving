// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int length = strlen(s);

    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}