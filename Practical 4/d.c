// Write a programs to print the fibbonacci series.

#include <stdio.h>

void main() {
    int range, a = 0, b = 1;
    printf("Enter Range for Fibonacci Series: ");
    scanf("%d", &range);

    printf("Fibonacci Series: %d %d", a, b);
    for(int i = 0 ; i < range - 2 ; i++) {
        int temp = a + b;
        printf(" %d", temp);
        a = b;
        b = temp;
    }
}