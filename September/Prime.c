#include<stdio.h>
int main()
{
    int n,prime,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if (n % i == 0)
            {
            prime=0;
            }
        }
    }
    if (prime)
    {
        printf("The number is a prime number.\n");
    }
    else
    {
        printf("The number is not a prime number.\n");
    }
}