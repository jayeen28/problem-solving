#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int n, a, maxi = 0;
        scanf("%d %d", &n, &a);
        int freq[n];

        for (int i = 0; i < n; i++)
        {
            int inp;
            scanf("%d", &inp);

            freq[inp - 1] += 1;
        }

        for (int i = 0; i < n; i++)
        {
            if (freq[maxi] < freq[i])
            {
                maxi = i;
            }
        }

        printf("%d\n", maxi);
    }

    return 0;
}