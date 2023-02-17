// Programs on unions.

#include <stdio.h>

union Circle {
    int radius;
};

void main() {
    union Circle c;
    float pi = 3.14;

    printf("Enter Radius: ");
    scanf("%d", &c.radius);

    float circumference = 2 * pi * c.radius;
    float area = pi * c.radius * c.radius;

    printf("\nCircumference of Circle is %.2f", circumference);
    printf("\nArea of Circle is %.2f", area);
}