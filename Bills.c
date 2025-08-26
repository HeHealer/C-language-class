#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number of calls: ");
    scanf("%d",&a);
    if((a>0)&&(a<=100))
    {
        printf("Free");
    }
    if((a>100)&&(a<=200))
    {
        a=a-100;
        b=(a*1);
        printf("Your bill is: %d",b);
    }
    if ((a>200)&&(a<=300))
    {
        a=a-200;
        b=(a*2)+100;
        printf("Your bill is: %d",b);
    }
    if ((a>300)&&(a<=400))
    {
        a=a-300;
        b=(a*4)+300;
        printf("Your bill is: %d",b);
    }
    if (a>400)
    {
        a=a-400;
        b=(a*6)+700;
        printf("Your bill is: %d",b);
    }
    return 0;
}