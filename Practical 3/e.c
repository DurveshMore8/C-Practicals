// Write a program to check whether the entered number is prime or not.

#include <stdio.h>
#include <stdbool.h>        // To use boolean data type

int main() {
    int number;
    bool prime = true;
    printf("Enter Number: ");
    scanf("%d", &number);

    if(number == 1) {
        prime = false;
    }
    else {
        for(int i = 2 ; i <= number/2 ; i++) {
            if(number % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if(prime) {
        printf("%d is a Prime number", number);
    }
    else {
        printf("%d is not a Prime number", number);
    }
}