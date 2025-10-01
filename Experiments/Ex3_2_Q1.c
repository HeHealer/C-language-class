//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

#include<stdio.h>
int main(){
    int n,positive=0,negative=0,zero=0;
    char choice;
    do{
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n>0)
        {
            positive++;
        }
        else if(n<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        printf("Do you want to enter another number?(y/n): ");
        scanf("%c",&choice);
    }while(choice=='y'||choice=='Y');
    printf("Positive: ",positive);
    printf("Negative: ",negative);
    printf("Zero: ",zero);
}