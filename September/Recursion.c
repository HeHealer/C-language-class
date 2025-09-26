//WAP to calculate factorial of a number using recursion.

#include<stdio.h>
int factorial(int n){
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int a,ans;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a<0)
    {
        printf("Not defined\n");
    }
    else
    {
        ans=factorial(a);
        printf("Factorial is: %d",ans);
    }
}