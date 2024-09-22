// problem link: https://cses.fi/problemset/task/1755

#include <stdio.h>
#include <string.h>

int alphas[26] = {0}; // Created a frequency array to store the frequency of 26 alphabets.

int main()
{
    char inp[1000001];
    scanf("%s", inp);
    long int inpLength = strlen(inp);
    char palindrome[inpLength];
    palindrome[inpLength] = '\0';

    // Record the frequency
    for (int i = 0; inp[i] != '\0'; i++)
    {
        alphas[inp[i] - 'A']++;
    }

    // Get the odd frequencies. If multiple found then break and return, because palindrome can not be build with multiple odd.
    int oneOdd = -1;
    for (int i = 0; i < 26; i++)
    {
        if (alphas[i] % 2 == 1)
        {
            if (oneOdd == -1)
                oneOdd = i;
            else
            {
                printf("NO SOLUTION\n");
                return 0;
            }
        }
    }

    // Place the single odd item in the middle if exists.
    if (oneOdd != -1)
    {
        palindrome[inpLength / 2] = 'A' + oneOdd;
        alphas[oneOdd] -= 1;
    }

    // Build palindrome by distributing character equally.
    int id = 0;
    for (int i = 0; i < 26; i++)
    {
        while (alphas[i] >= 2)
        {
            palindrome[id] = 'A' + i;
            palindrome[inpLength - 1 - id] = 'A' + i;
            id++;
            alphas[i] -= 2;
        }
    }

    printf("%s\n", palindrome);

    return 0;
}