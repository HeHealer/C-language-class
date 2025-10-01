//4.According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include<stdio.h>
int main(){
    int year,i,days=0,leap,day;
    printf("Enter the year: ");
    scanf("%d",&year);
    for(i=1;i<year;i++)
    {
        if((i%400==0)||(i%4==0&&i%100!=0))
        {
            days+=366;
        }
        else
        {
            days+=365;
        }
    }
    day=days%7;
    printf("1st January %d is: ",year);
    switch (day)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Satday");
        break;
    case 6:
        printf("Sunday");
        break;
    }
}