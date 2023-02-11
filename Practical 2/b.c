// Write a program to find the area of rectangle, square and circle.

#include <stdio.h>

int main() {
    while(1) {
        int choice;
        printf("1 for Rectangle\n2 for Square\n3 for Circle\n4 to Exit");
        printf("\nEnter your choice to calculate area: ");
        scanf("%d", &choice);
        
        switch (choice) //If you don't put curly braces for case statements variable should be declared outside switch-case.
        {
        case 1:{
            int length, breadth;
            printf("\nEnter Length: ");
            scanf("%d", &length);
            printf("Enter Breadth: ");
            scanf("%d", &breadth);

            printf("\nArea of Rectangle is %d\n\n", (length * breadth));
            break;
        }
        
        case 2:{
            int side;
            printf("\nEnter Side: ");
            scanf("%d", &side);

            printf("\nArea of Square is %d\n\n", (side * side));
            break;
        }

        case 3:{
            int radius;
            printf("\nEnter Radius: ");
            scanf("%d", &radius);

            printf("\nArea of Circle is %f\n\n", (3.14 * radius * radius));
            break;
        }

        case 4:{
            printf("\nCode Finished....\n\n");
            return 0;
        }

        default:{
            printf("\nEnter valid choice\n\n");
            break;
        }
        }
    }
}