// Write a program to find the factorial of a number using recursive function.

#include <stdio.h>

int factorial(int x) {
    if (x >= 1)
        return x * factorial(x - 1);
    else
        return 1;
}

void main() {
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d", number, factorial(number));
}