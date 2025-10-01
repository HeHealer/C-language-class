//WAP to define structure name student with roll no. , name and marks and write function to input and display student details.

#include<stdio.h>
struct Student
{
    int roll_no;
    char name[100];
    float marks;
};
void input(struct Student s)
{
    printf("Enter Student Roll No.: ");
    scanf("%d",&s.roll_no);
    printf("Enter Student Name: ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter Marks: ");
    scanf("%f",&s.marks);
}
void display(struct Student s)
{
    printf("Roll No.: %d\n",s.roll_no);
    printf("Name: %s\n",s.name);
    printf("Marks: %f\n",s.marks);
}
int main(){
    struct Student s;
    intput(&s);
    display(s);
}