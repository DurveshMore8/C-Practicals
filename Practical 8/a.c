// Write a program to find the largest value that is stored in the array.

#include <stdio.h>

void main() {
    int array[5] = {1221, 23, 101, 543, 92};
    int largest = array[0];

    for(int i = 0; i < 5; i++) {
        if(array[i] > largest) {
            largest = array[i];
        }
    }

    printf("%d is the largest value", largest);
}