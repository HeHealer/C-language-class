#include <stdio.h>
int main() {
    int matrix[3][3],i,j,sum=0,value=1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrix[i][j] = value;
            value++;
        }
    }
    printf("The 3x3 matrix with all elements as 9:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }
    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}