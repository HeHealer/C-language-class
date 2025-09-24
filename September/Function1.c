//Write a program to accept two values from the user and pass these values to a function to compute the sum of these numbers, return the sum and eveluate whether the returned number is even or odd using another function.
#include <stdio.h>
int Sum(int a, int b)
{
    return a + b;
}
void check(int num)
{
    if (num % 2 == 0)
        printf("The sum %d is Even.\n",num);
    else
        printf("The sum %d is Odd.\n",num);
}
int main(){
    int num1,num2,result;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    result=Sum(num1,num2);
    check(result);
    return 0;
}