#include<stdio.h>
int main(){
    int a,b,even,odd,square,cube;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    if(a%2==0)
    {
        printf("The first number is even\n");
        square=a*a;
        printf("The square is: %d\n",square);
    }
    else
    {
        printf("The first number is odd\n");
        cube=a*a*a;
        printf("The cube is: %d\n",cube);
    }
    if(b%2==0)
    {
        printf("The second number is even\n");
        square=b*b;
        printf("The square is: %d\n",square);
    }
    else
    {
        printf("The second number is odd\n");
        cube=b*b*b;
        printf("The cube is: %d\n",cube);
    }
}