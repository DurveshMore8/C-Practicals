// Write a program to check whether the number is even or odd.

#include <stdio.h>

void main() {
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("%d is an Even Number", number);
    }
    else {
        printf("%d is an Odd Number", number);
    }
}