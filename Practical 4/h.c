// Write a program to check whether the entered number is Armstrong or not.

#include <stdio.h>
#include <math.h>

void main() {
    int number, copy, length = 0, sum = 0;
    printf("Enter Number to check Armstrong: ");
    scanf("%d", &number);
    copy = number;

    while(number > 0) {
        length++;
        number /= 10;
    }

    number = copy;

    while(number > 0) {
        int digit = number % 10;
        number = number / 10;
        sum += pow(digit, length);
    }

    if(copy == sum) {
        printf("%d is an Armstrong", copy);
    }
    else {
        printf("%d is not an Armstrong", copy);
    }
}