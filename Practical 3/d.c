// Write a program to find the factorial of a number.

#include <stdio.h>

void main() {
    int number, factorial = 1;
    printf("Enter Number: ");
    scanf("%d", &number);

    for(int i = 1 ; i <= number ; i++) {
        factorial = factorial * i;
    }

    printf("\nFactorial of %d is %d", number, factorial);
}
