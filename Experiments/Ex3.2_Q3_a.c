/*WAP to generate the following set of output.

  1
 2 3
4 5 6

*/

#include<stdio.h>
int main(){
    int i,j,k,ans;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf(" ");   
        }
        for(k=1;k<=i;k++)
        {
            ans=(i*(i-1))/2+j;
            printf("%d",ans);
            if(j<i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}