//WAP to read the details of two workers and calculate total payment of workers using structures.

#include<stdio.h>
struct worker
{
    int id;
    char name[100];
    float salary,overtime;
}w1,w2;
int main(){
    printf("Enter ID, Name, Salary, Overtime of first worker: ");
    scanf("%d%s%f%f",&w1.id,w1.name,w1.salary,w1.overtime);
    printf("Enter ID, Name, Salary, Overtime of second worker: ");
    scanf("%d%s%f%f",&w2.id,w2.name,w2.salary,w2.overtime);
    float total1=w1.salary+w1.overtime;
    float total2=w2.salary+w2.overtime;
    printf("Total payment of worker 1 is: %f",total1);
    printf("Total payment of worker 2 is: %f",total2);
}
