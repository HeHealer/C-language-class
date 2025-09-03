#include<stdio.h>
int main(){
    int i=1,f=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,f);   
}