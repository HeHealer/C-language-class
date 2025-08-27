#include <stdio.h>
int main() {
    float l,b,a,p;
    printf("Enter the Length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the Breadth of the rectangle: ");
    scanf("%f", &b);
    a=l*b;
    p=2*(l+b);
    printf("The area of the rectangle is: %f\n",a);
    printf("The perimeter of the rectangle is: %f\n",p);
    return 0;
}