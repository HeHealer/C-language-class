//4.WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.

#include<stdio.h>
int main(){
    int m,n,p,q,A[50][50],B[50][50],C[50][50],i,j;
    printf("Enter rows and coloumns of matrix A (m x n): ");
    scanf("%d%d",&m,&n);
    printf("Enter rows and coloumns of matrix b (p x q): ");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Matrix multiplication not possible.\n");
        printf("Number of columns in A must be equal to B.");
        return 0;
    }
    printf("Enter elements of Matrix A (%d x %d): ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of Matrix B (%d x %d): ",p,q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            C[i][j]=0;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(int k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("Product of Mtrix A and B (%d x %d): ",m,q);
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
}