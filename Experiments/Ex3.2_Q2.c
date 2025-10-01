//WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting.   Num * 1 = Num 

#include<stdio.h>
int main(){
    int n,i,ans;
    printf("Enter a number for multiplication table: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        ans=n*i;
        printf("%d*%d=%d\n",i,n,ans);
    }
}