#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a / b;
    int rem = a % b;
    double resReal = a / (double)b;
    printf("%d %d %.10lf\n", res, rem, resReal);
    return 0;
}

// A/B Problem
// Write a program which reads two integers a and b, and calculates the following values:

// a ÷ b: d (in integer)
// remainder of a ÷ b: r (in integer)
// a ÷ b: f (in real number)
// Input
// Two integers a and b are given in a line.

// Output
// Print d, r and f separated by a space in a line. For f, the output should not contain an absolute error greater than 10-5.

// Constraints
// 1 ≤ a, b ≤ 109
// Sample Input 1
// 3 2
// Sample Output 1
// 1 1 1.50000