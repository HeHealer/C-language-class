/*Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
Example of Ramanujan number: 1729
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)
*/

#include<stdio.h>
int main(){
    int l,a,b,c,d;
    printf("Enter the limit: ");
    scanf("%d",&l);
    for (a=1;a<=l;a++)
    {
        b=0;
        for(c=1;c*c*c<=a;c++)
        {
            for(d=c;d*d*d<=a;d++)
            {
                if(c*c*c+d*d*d==a)
                {
                    b++;
                }
            }
        }
        if(b>=2)
        {
            printf("%d\n",a);
        }
    }
}