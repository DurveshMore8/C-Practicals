// Write a program that performs addition and subtraction of matrices.

#include <stdio.h>

void main() {
    int M1[5][5], M2[5][5], multiply[5][5];
    int row1, column1, row2, column2;

    printf("Enter number of rows in matrix 1: ");
    scanf("%d", &row1);
    printf("Enter number of columns in matrix 1: ");
    scanf("%d", &column1);
    printf("Enter number of rows in matrix 2: ");
    scanf("%d", &row2);
    printf("Enter number of columns in matrix 2: ");
    scanf("%d", &column2);

    if (row2 == column1) {
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

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                multiply[i][j] = 0;
                for (int k = 0; k < row1; k++) {
                    multiply[i][j] += M1[i][k] * M2[k][j];
                }
            }
        }

        printf("\nMultiplication of Matrix\n");
        for(int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                printf("%d ", multiply[i][j]);
            }
            printf("\n");
    }
    }
    else {
        printf("\nMatrix cannot be multiplied.");
    }
}