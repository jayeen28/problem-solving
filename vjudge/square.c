#include <stdio.h>

int main()
{
    int l, b;
    scanf("%d %d", &l, &b);
    int area = l * b;
    int perimeter = 2 * (l + b);
    printf("%d %d\n", area, perimeter);
}

// Write a program which calculates the area and perimeter of a given rectangle.

// Input
// The length a and breadth b of the rectangle are given in a line separated by a single space.

// Output
// Print the area and perimeter of the rectangle in a line. The two integers should be separated by a single space.

// Constraints
// 1 ≤ a, b ≤ 100
// Sample Input 1
// 3 5
// Sample Output 1
// 15 16