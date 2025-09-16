//3.Write a program that prompts the user to enter their name and age.

#include<stdio.h>
int main()
{
    char name[30];
    int age;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Name: %s\nAge:%d\n",name,age);
}