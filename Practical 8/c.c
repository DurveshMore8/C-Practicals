// Write a program to arrange the 'n' numbers stored in the array in ascending and/or descending order.

#include <stdio.h>

void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
}

void main() {
    int length;
    printf("Enter Length of Array: ");
    scanf("%d", &length);

    int array[100];
    printf("Enter Elements: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nArray Elements: ");
    display(array, length);

    // Ascending Order
    for(int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
    printf("\nArray of Ascending Order: ");
    display(array, length);

    // Descending Order
    for(int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] < array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
    printf("\nArray of Descending Order: ");
    display(array, length);
}