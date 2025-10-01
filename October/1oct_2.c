//WAP to find the second largest element in an array by passing array to a function.

#include<stdio.h>
int find(int arr[],int size)
{
    int a,b,i;
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
    for(i=2;i<size;i++)
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
    return b;
}
int main(){
    int arr[100],n,i,ans;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ans=find(arr,n);
    printf("Second largest element=%d\n",ans);
}