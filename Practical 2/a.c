// Write a program to swap two numbers without using third variable.

#include <stdio.h>

void main() {
    int a, b;
    printf("Enter Number: ");
    scanf("%d %d", &a, &b);

    printf("Before Reversing: a = %d and b = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Reversing: a = %d and b = %d", a, b);
}