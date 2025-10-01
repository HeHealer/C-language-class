//Write a function to sort an array using function.

#include<stdio.h>
void sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void display(int arr[],int n)
{
    int i;
    printf("Sorted: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d Elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    display(arr,n);
}