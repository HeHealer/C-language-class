//WAP and function to swap two no. using call by refrence.

#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int c,d;
    printf("Enter first number: ");
    scanf("%d",&c);
    printf("Enter second number: ");
    scanf("%d",&d);
    printf("Before Swapping\n");
    printf("c=%d\nd=%d\n",c,d);
    swap(&c, &d);
    printf("After Swapping\n");
    printf("c=%d\nd=%d\n",c,d);
}