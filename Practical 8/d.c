// Write a program that performs addition and subtraction of matrices.

#include <stdio.h>

void main() {
    int M1[100][100], M2[100][100];
    int row1, column1, row2, column2;

    printf("Enter number of rows in matrix 1: ");
    scanf("%d", &row1);
    printf("Enter number of columns in matrix 1: ");
    scanf("%d", &column1);
    printf("Enter number of rows in matrix 2: ");
    scanf("%d", &row2);
    printf("Enter number of columns in matrix 2: ");
    scanf("%d", &column2);

    printf("Enter elements of matrix 1: \n");
    for(int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            printf("Enter M1[%d][%d]: ", (i + 1), (j + 1));
            scanf("%d", &M1[i][j]);
        }
    }

    printf("Enter elements of matrix 2: \n");
    for(int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            printf("Enter M2[%d][%d]: ", (i + 1), (j + 1));
            scanf("%d", &M2[i][j]);
        }
    }

    printf("\nMatrix 1\n");
    for(int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2\n");
    for(int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", M2[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition of Matrix\n");
    for(int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", M1[i][j] + M2[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of Matrix\n");
    for(int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", M1[i][j] - M2[i][j]);
        }
        printf("\n");
    }
}