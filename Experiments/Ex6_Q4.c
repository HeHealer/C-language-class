//4.Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges. 

#include<stdio.h>
int ISPRIME(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b;
    printf("Enter the start range: ");
    scanf("%d",&a);
    printf("Enter the end range: ");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        if(ISPRIME(i))
        {
            printf("%d",i);
        }
    }
    printf("\n");
}