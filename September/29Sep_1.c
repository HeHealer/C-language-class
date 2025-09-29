//WAP to accept the details of employee and display them using structures. Details consist of Employee ID, Name, Designation, Department, Salary.

#include<stdio.h>
struct Employee
{
    int ID;
    char name[100], designation[100], department[100];
    float salary;
};
int main(){
    struct Employee emp;
    printf("Enter Employee ID; ");
    scanf("%d",&emp.ID);
    printf("Enter Name; ");
    fgets(emp.name,sizeof(emp.name),stdin);
    printf("Enter Designation ");
    fgets(emp.designation,sizeof(emp.designation),stdin);
    printf("Enter Department; ");
    fgets(emp.department,sizeof(emp.department),stdin);
    printf("Enter salary: ");
    scanf("%f",&emp.salary);
    printf("Employee Details\n");
    printf("Employee ID: %d\n",emp.ID);
    printf("Name: %s\n",emp.name);
    printf("Designation: %s\n",emp.designation);
    printf("Department: %s\n",emp.department);
    printf("Salary: %f\n",emp.salary);
}