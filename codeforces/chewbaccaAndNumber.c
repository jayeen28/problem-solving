// problem link: https://codeforces.com/contest/514/problem/A

#include <stdio.h>

int main()
{

    char s[10];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (i == 0 && s[i] == '9')
            continue;
        if (s[i] >= '5' && s[i] <= '9')
            s[i] = '9' - s[i] + '0';
    }

    printf("%s\n", s);

    return 0;
}