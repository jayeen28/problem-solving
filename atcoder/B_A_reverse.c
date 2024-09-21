// problem link: https://atcoder.jp/contests/abc233/tasks/abc233_b?lang=en

#include <stdio.h>
#include <string.h>

int main()
{

    char s[100001];
    int l, r;
    scanf("%d %d", &l, &r);
    scanf("%s", s);
    l--;
    r--;
    for (int i = 0; i <= (r - l) / 2; i++)
    {
        char temp = s[l + i];
        s[l + i] = s[r - i];
        s[r - i] = temp;
    }
    printf("%s\n", s);
    return 0;
}