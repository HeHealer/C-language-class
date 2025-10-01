//Write a function to sort an array using function.

#include<stdio.h>
void sort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void display(int arr[],int size)
{
    int i;
    printf("Sorted: ");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    display(arr,n);
}