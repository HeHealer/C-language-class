//WAP to display the sum of rows and columns of a 3X3 matrix.

#include <stdio.h>
int main() {
    int matrix[3][3], rowSum[3] = {0}, colSum[3] = {0};
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    printf("Sum of each column:\n");
    for (int j = 0; j < 3; j++)
    {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}