// Write a program to find the sum of numbers from 1 to 100.

#include <stdio.h>

void main() {
    int sum = 0;

    for(int i = 1 ; i <= 100 ; i++) {
        sum += i;
    }

    printf("Sum of numbers from 1 to 100 is %d", sum);
}