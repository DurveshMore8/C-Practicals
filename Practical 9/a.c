// Write a program to demonstrate the use of pointers.

#include <stdio.h>

void main() {
    int number = 10;
    int *pointer;

    pointer = &number;

    printf("Value of number is: %d", number);
    printf("\nAddress of number is: %p", &number);
    printf("\nValue of pointer is: %p", pointer);
    printf("\nValue of number using pointer is: %d", *pointer);

    *pointer = 20;

    printf("\nUpdated value of number: %d", *pointer);
}