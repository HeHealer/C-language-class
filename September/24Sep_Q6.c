//WAp to display the sum of rows and columns of a 3X3 matrix.

#include<stdio.h>
int main(){
    int a[3][3],i,j,row=0,col=0;
    printf("Enter elements of the 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        row=0;
        for(j=0;j<3;j++)
        {
            row+=a[i][j];
        }
    }
    for(j=0;j<3;j++)
    {
        col=0;
        for(i=0;i<3;i++)
        {
            col+=a[i][j];
        }
    }
    printf("Sum of rows %d: %d\n",i+1,row);
    printf("Sum of columns %d: %d\n",j+1,col);
}