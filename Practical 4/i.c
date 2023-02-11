// Write a program to count the digit in a number.

#include <stdio.h>

void main() {
    int number, copy, length = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    copy = number;

    while(number > 0) {
        length ++;
        number /= 10;
    }

    printf("There are %d digits in %d", length, copy);
}