#include <stdio.h>
int main(){
    int a,b,c,D;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    printf("Discriminant is: %d\n",D);
    if(D>0)
    {
        printf("Real and Distinct\n");
    }
    else if(D=0)
    {
        printf("Real and Equal\n");
    }
    else
    {
        printf("Imaginary\n");
    }
    return 0;
}
