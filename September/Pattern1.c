#include<stdio.h>
int main(){
    int i,j,k,n,a=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=(2*a)-1;k>0;k--)
        {
            printf(" ");
        }
        if(i>=4)
        {
            for(n=4;n>0;n--)
            {
                printf("%d",n);
            }
        }
        else
        {
            for(n=i;n>0;n--)
            {
                printf("%d",n);
            }
        }
        a++;
        printf("\n");
    }
    return 0;
}