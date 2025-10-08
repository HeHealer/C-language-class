/* b.

   1
  1 1
 1 2 1
1 3 3 1

*/

#include<stdio.h>
int main(){
    int i,j,k,n=1,rows=4;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        n=1;
        for(k=0;k<=i;k++)
        {
            printf("%d ",n);
            n=n*(i-k)/(k+1);
        }
        printf("\n");
    }
}