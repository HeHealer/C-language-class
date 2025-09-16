//4.According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include<stdio.h>
int isLeap(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int main() {
    int year;
    long long totalDays = 0;
    int i;
    printf("Enter a year: ");
    scanf("%d", &year);
    for (i = 1; i < year; i++)
    {
        if (isLeap(i))
        {
            totalDays += 366;
        }
        else
        {
            totalDays += 365;
        }
    }
    char *daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int dayIndex = totalDays % 7;

    printf("On January 1st, %d, it was a %s.\n", year, daysOfWeek[dayIndex]);
}