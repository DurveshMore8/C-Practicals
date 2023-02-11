// Write a program to find whether a given number is palindrome or not.

#include <stdio.h>

void main() {
    int number, copy, reverse = 0;
    printf("Enter Number to check Palindrome: ");
    scanf("%d", &number);
    copy = number;

    while(number > 0) {
        int digit = number % 10;
        number = number / 10;
        reverse = (reverse * 10) + digit;
    }

    if(reverse == copy) {
        printf("%d is a Palindrome", copy);
    }
    else {
        printf("%d is not a Palindrome", copy);
    }
}