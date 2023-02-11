// Write a program to print reverse of a number.

#include <stdio.h>

void main() {
    int number, copy, reverse = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    copy = number;

    while(number > 0) {
        int digit = number % 10;
        number = number / 10;
        reverse = (reverse * 10) + digit;
    }

    printf("Reverse of %d is %d", copy, reverse);
}