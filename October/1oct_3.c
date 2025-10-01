//WAP to find sum of digit using recursion.

#include<stdio.h>
int sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return (a%10)+sum(a/10);
    }
}
int main(){
    int b,ans;
    printf("Enter a number: ");
    scanf("%d",&b);
    ans=sum(b);
    printf("Sum of Digits=%d\n",ans);
}