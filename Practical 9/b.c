// Write a program to perform addition and subtraction of two pointer variables.

#include <stdio.h>

void main() {
    int n1 = 20, n2 = 10;
    int *ptr1 = &n1, *ptr2 = &n2;

    printf("Pointer 1: %p", ptr1);
    printf("\nPointer 2: %p", ptr2);

    int add = *ptr1 + *ptr2;
    printf("\nAddition of ptr1 and ptr2 is: %d", add);

    int sub = *ptr1 - *ptr2;
    printf("\nSubtraction of ptr1 and ptr2 is: %d", sub);

    int dif = ptr1 - ptr2;
    printf("\nDifference between ptr1 and ptr2 is: %d", dif);
}