// Programs on Functions

#include <stdio.h>

// Function return Integer value
int add(int a, int b) {
    return a + b;
}

// Void Function with Parameters
void subtract(int c, int d) {
    printf("\n%d - %d = %d", c, d, (c-d));
}

// Void Function without Parameters
void multiplication() {
    int x, y;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d * %d = %d", x, y, (x * y));
}

void main() {
    int a = 45, b = 15;
    printf("%d + %d = %d", a, b, add(a, b));

    subtract(95, 34);

    multiplication();
}