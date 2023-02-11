// Write a program to find the largest of three numbers.

#include <stdio.h>

void main() {
    int n1, n2, n3, largest;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Using Conditional Statements
    printf("\nUsing Conditional Statements\n");
    largest = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    printf("%d is the largest number", largest);

    printf("\nOR\n");

    // Using if-else ladder
    printf("Using if-else ladder\n");
    if(n1 > n2) {
        if(n1 > n3) {
            largest = n1;
        }
        else {
            largest = n3;
        }
    }
    else {
        if(n2 > n3) {
            largest = n2;
        }
        else {
            largest = n3;
        }
    }
    printf("%d is the largest number", largest);
}