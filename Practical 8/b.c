// Write a program using pointers to compute the sum of all elements stored in an array.

#include <stdio.h>
#include <malloc.h>

void main() {
    int size, sum = 0;
    int *pointer;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    pointer = (int *) malloc(size * sizeof(int));
    printf("Enter Elements in Array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", pointer + i);
    }

    for (int i = 0; i < size; i++) {
        sum += *(pointer + i);
    }

    printf("\nArray Elements:");
    for (int i = 0; i < size; i++) {
        printf(" %d", *(pointer + i));
    }
    printf("\nSum of all elements of array is %d", sum);
}