// problem parse digits

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    printf("Found digits: ");
    if (N == 0)
        printf("0\n");
    else
    {
        while (N != 0)
        {
            int d;
            d = N % 10;
            printf("%d ", d);
            N = N / 10;
        }
        printf("\n");
    }

    return 0;
}