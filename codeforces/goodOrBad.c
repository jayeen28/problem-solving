// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        char s[100001];
        scanf("%s", s);
        int length = strlen(s);
        int matched = 0;
        for (int i = 1; i < length - 1; i++)
        {
            if (s[i] == '0')
            {
                if (s[i + 1] == '1' && s[i - 1] == '1')
                {
                    matched = 1;
                    break;
                }
            }
            else
            {
                if (s[i + 1] == '0' && s[i - 1] == '0')
                {
                    matched = 1;
                    break;
                }
            }
        }
        if (matched == 1)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}