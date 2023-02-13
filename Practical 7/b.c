// Write a program to find the sum of natural number using recursive function.

#include <stdio.h>

int sum(int no) {
    if (no != 0)
        return no + sum(no - 1);
    else
        return no;
}

void main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of natural number till %d is %d", number, sum(number));
}