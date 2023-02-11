// Write a program to find the volume of a cube, sphere and cylinder.

#include <stdio.h>

int main() {
    while(1) {
        int choice;

        printf("1 for Cube\n2 for Sphere\n3 for Cylinder\n4 to Exit");
        printf("\nEnter your choice to calculate volume: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:{
            int edge;
            printf("\nEnter Edge: ");
            scanf("%d", &edge);

            printf("\nVolume of Cube is %d\n\n", (edge * edge * edge));
            break;
        }

        case 2:{
            int radius;
            printf("\nEnter Radius: ");
            scanf("%d", &radius);

            printf("\nVolume of Sphere is %f\n\n", ((4.0/3.0) * 3.14 * (radius * radius * radius)));
            break;
        }

        case 3:{
            int radius, height;
            printf("\nEnter Radius: ");
            scanf("%d", &radius);
            printf("Enter height: ");
            scanf("%d", &height);

            printf("\nVolume of Cylinder is %f\n\n", (3.14 * radius * radius * height));
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