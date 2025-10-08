/*3.WAP to generate the following set of output.
a.	
  1
 2 3
4 5 6

*/

#include<stdio.h>
int main(){
    int i,j,n=1,rows=3;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
}