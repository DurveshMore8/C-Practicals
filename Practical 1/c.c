// Write a program to find the Addition, Subtraction, Multiplication and Division of two numbers.

#include <stdio.h>

void main() {
    int n1, n2;

    printf("Enter Numbers: ");
    scanf("%d,%d", &n1, &n2);

    printf("%d + %d = %d", n1, n2, (n1 + n2));
    printf("\n%d - %d = %d", n1, n2, (n1 - n2));
    printf("\n%d * %d = %d", n1, n2, (n1 * n2));
    printf("\n%d / %d = %d", n1, n2, (n1 / n2));
}