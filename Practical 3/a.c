// Write a program to enter a number from the user and display the month name.
// If number > 13 then display invalid input using swtich case.

#include <stdio.h>

int main() {
    while(1) {
        int month;
        printf("Enter Number from 1 to 12 and 0 to Exit");
        printf("\nEnter Number: ");
        scanf("%d", &month);

        switch(month) {
            case 0:
                printf("Code Finished...\n\n");
                return 0;

            case 1:
                printf("January\n\n");
                break;

            case 2:
                printf("February\n\n");
                break;
            
            case 3:
                printf("March\n\n");
                break;
            
            case 4:
                printf("April\n\n");
                break;
            
            case 5:
                printf("May\n\n");
                break;
            
            case 6:
                printf("June\n\n");
                break;

            case 7:
                printf("July\n\n");
                break;

            case 8:
                printf("August\n\n");
                break;

            case 9:
                printf("September\n\n");
                break;

            case 10:
                printf("October\n\n");
                break;

            case 11:
                printf("November\n\n");
                break;

            case 12:
                printf("December\n\n");
                break;
            
            default:
                printf("Invalid Input\n\n");
                break;
            }
    }
}