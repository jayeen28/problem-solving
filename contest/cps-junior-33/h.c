// problem link: https://vjudge.net/contest/658693#problem/H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int freq[26] = {0};

int main()
{
    char s[200001];
    char t[200001];
    scanf("%s", s);
    scanf("%s", t);
    int sLen = strlen(s), tLen = strlen(t), matchCount = 0;
    int minLength = (sLen < tLen) ? sLen : tLen;
    int totalLength = sLen + tLen;

    if (s[sLen - 1] != t[tLen - 1])
    {
        printf("%d\n", totalLength);
        return 0;
    }

    for (int i = 1; i <= minLength; i++)
    {
        if (s[sLen - i] == t[tLen - i])
            matchCount++;
        else
            break;
    }
    printf("%d\n", totalLength - (matchCount * 2));
    return 0;
}