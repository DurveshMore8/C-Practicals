// Write a program to find the sum of squares of digits of a number.

#include <stdio.h>

void main() {
    int number, copy, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    copy = number;

    while(number > 0) {
        int digit = number % 10;
        number = number / 10;
        sum = sum + digit;
    }

    printf("Sum of digits of %d is %d", copy, sum);
}