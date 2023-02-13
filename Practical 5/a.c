// Programs on different patterns.

#include <stdio.h>

void main() {

    // Square Pattern
    printf("Square Pattern: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pyramid Pattern
    printf("\nPyramid Pattern: \n");
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5-i-1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Reverse Pyramid Pattern
    printf("\nReverse Pyramid Pattern: \n");
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (5 - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Left Triangle Number Pattern
    printf("\nLeft Triangle Number Pattern: \n");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (j));
        }
        printf("\n");
    }

    // Alphabet Pyramid Pattern
    printf("\nAlphabet Pyramid Pattern: \n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%c", 65 + k);
        }
        printf("\n");
    }
}