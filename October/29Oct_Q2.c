//WAP to add two numbers using pointers.

#include<stdio.h>
int main(){
    int a,b,sum;
    int *c,*d;
    printf("Enter two numbers you want to add: ");
    scanf("%d%d",&a,&b);
    c=&a;
    d=&b;
    sum=*c+*d;
    printf("Sum is: %d",sum);
}