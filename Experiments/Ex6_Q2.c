//2.Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers. 

#include<stdio.h>
int GCD(int num1,int num2)
{
    if(num2==0)
    {
        return num1;
    }
    return GCD(num2,num1%num2);    
}
int main(){
    int num1,num2;
    printf("Enter two positive numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1<0||num2<0)
    {
        printf("Enter positive numbers.\n");
        return 1;
    }
    printf("GCD is: %d",GCD(num1,num2));
}