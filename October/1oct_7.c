//WAP to create a structure employee with ID, name, basic salary, DA, HRA, gross salary and Write a function to calculate salary and display details.

#include<stdio.h>
struct Employee
{
    int id;
    char name[100];
    float basic,da,hra,da_per,hra_per,gross;
};
void input(struct Employee *emp)
{
    printf("Enter Employee ID: ");
    scanf("%d",&emp->id);
    getchar();
    printf("Enter Employee Name: ");
    fgets(emp->name,sizeof(emp->name),stdin);
    printf("Enter Basic Salary: ");
    scanf("%f",&emp->basic);
    printf("Enter DA percentage: ");
    scanf("%f",&emp->da_per);
    printf("Enter HRA Percentage: ");
    scanf("%f",&emp->hra_per);
}
void salary(struct Employee *emp)
{
    emp->da=(emp->da_per/100)*emp->basic;
    emp->hra=(emp->hra_per/100)*emp->basic;
    emp->gross=emp->basic+emp->da+emp->hra;
}
void details(struct Employee emp)
{
    printf("ID: %d\n",emp.id);
    printf("Name: %s\n",emp.name);
    printf("Basic Salary: %f\n",emp.basic);
    printf("DA: %f\n",emp.da);
    printf("HRA: %f\n",emp.hra);
    printf("Gross Salary: %f\n",emp.gross);
}
int main(){
    struct Employee emp;
    input(&emp);
    salary(&emp);
    details(emp);
}