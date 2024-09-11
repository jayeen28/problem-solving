// Problem link: https://vjudge.net/problem/Aizu-ITP1_4_C

#include <stdio.h>

int main()
{

    while (1)
    {
        char op;
        int a, b;
        scanf("%d %c %d", &a, &op, &b);

        int res;
        if (op == '?')
            break;
        else if (op == '+')
            res = a + b;
        else if (op == '-')
            res = a - b;
        else if (op == '*')
            res = a * b;
        else if (op == '/')
            res = a / b;
        printf("%d\n", res);
    }
    return 0;
}