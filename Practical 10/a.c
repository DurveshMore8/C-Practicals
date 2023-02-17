// Define a structure named Learner that stores the roll number, name, class, marks of five subjects.
// Write a C program that will take the Information of learner rom user and display marksheet.

#include <stdio.h>

struct Learner {
    int rollnumber;
    char name[50];
    int class;
    int marks[5];
};

void main() {
    int total = 0;
    struct Learner student;

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Class: ");
    scanf("%d", &student.class);

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollnumber);

    printf("Enter marks of five subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
    }

    printf("\nMARKSHEET");
    printf("\nStudent's Name: %s", student.name);
    printf("\nClass: %d", student.class);
    printf("\nRoll Number: %d", student.rollnumber);
    for (int i = 0; i < 5; i++) {
        printf("\nSubject %d: %d", i + 1, student.marks[i]);
        total += student.marks[i];
    }
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage Obtained: %.2f", (total / 500.0) * 100);
}