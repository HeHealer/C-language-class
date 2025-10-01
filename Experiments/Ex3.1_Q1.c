//1.WAP to check if the triangle is valid or not.If the validity is established, do check if the triangle is isosceles, equilateral,right angle or scalene.Take the sides of the triangle as input from the user.

#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the lengths of the three sides of the triangle");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("The triangle is valid");
        if(a==b && b==c)
        {
            printf("The triangle is equilateral.\n");
        }
        else if(a == b || b ==c || a == c)
        {
            printf("The triangle is isosceles.\n");
        }
        else
        {
            printf("The triangle is scalene.\n");
        }
        if(( a*a +b*b == c*c ) || ( a*a + c*c == b*b ) || ( b*b + c*c == a*a ))
        {
            printf("The triangle is right angled.\n");
        }
        else
        {
            printf("The triangle is not right angled.\n");
        }
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
}