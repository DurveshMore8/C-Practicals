// Write a program to check whether the number is positive, negative or zero

#include <stdio.h>

void main() {
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    if(number == 0) {
        printf("Number is Zero");
    }
    else if(number > 0) {
        printf("%d is a Positive number", number);
    }
    else {
        printf("%d is a Negative number", number);
    }
}