//1.WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Enter at least two elements");
        return 1;
    }
    int arr[n];
    printf("Enter %d integers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    if(arr[0]>arr[1])
    {
        a=arr[0];
        b=arr[1];
    }
    else
    {
        a=arr[1];
        b=arr[0];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>a)
        {
            b=a;
            a=arr[i];
        }
        else if(arr[i]>b&&arr[i]!=a)
        {
            b=arr[i];
        }
    }
    printf("Second largest element: %d\n",b);
}