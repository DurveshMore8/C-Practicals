// Write a program that solve the quadratic equation.
// x = ((-b) +/- sqrt((b * b) - (4 * a * c))) / (2 * a)

#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, d, r1, r2;
    printf("Enter 3 co-efficients of quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    if (d < 0) {
        printf("Roots of %.0fx^2 + %.0fx + %.0f are Imaginary", a, b, c);
    }
    else if (d == 0) {
        r1 = (-b) / (2 * a);
        r2 = (-b) / (2 * a);
        printf("Roots of  %.0fx^2 + %.0fx + %.0f are Equal: %.2f %.2f", a, b, c, r1, r2);
    }
    else {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots of  %.0fx^2 + %.0fx + %.0f are Real: %.2f %.2f", a, b, c, r1, r2);
    }
}