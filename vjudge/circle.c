#include <stdio.h>

int main()
{
    double r;
    double p = 3.141592653589793238;
    scanf("%lf", &r);
    double cir = 2.0 * p * r;
    double area = p * r * r;
    printf("%.6lf %.6lf\n", area, cir);
    return 0;
}

// Write a program which calculates the area and circumference of a circle for given radius r.

// Input
// A real number r is given.

// Output
// Print the area and circumference of the circle in a line. Put a single space between them. The output should not contain an absolute error greater than 10-5.

// Constraints
// 0 < r < 10000
// Sample Input 1
// 2
// Sample Output 1
// 12.566371 12.566371
// Sample Input 2
// 3
// Sample Output 2
// 28.274334 18.849556