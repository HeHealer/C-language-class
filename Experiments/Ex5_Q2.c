//2.WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include<stdio.h>
int main(){
    int a[10000],n=0,even=0,odd=0,positive=0,negative=0;
    char choice;
    do
    {
        printf("Enter number %d: ",n+1);
        scanf("%d",&a[n]);
        if(a[n]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(a[n]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        n++;
        printf("Do you want to enter another number? (y/n):\n ");
        scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y');
    printf("Total numbers entered: %d\n",n);
    printf("Even n: %d\n",even);
    printf("Odd n: %d\n",odd);
    printf("Positive n: %d\n",positive);
    printf("Negative n: %d\n",negative);
}