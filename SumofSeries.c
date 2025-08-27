#include<stdio.h>
int main(){
    int n,i;
    float sum=0;
    printf("Enter a value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("The sum is: %f",sum);
    return 0;
}