#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,percentage,total;
    printf("Enter your marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=(sub1+sub2+sub3+sub4+sub5);
    percentage=total/5;
    printf("Your percentage is: %d\n",percentage);
    if(percentage>85)
    {
        printf("Your grade is O\n");
    }
    else if(percentage>75)
    {
        printf("Your grade is A\n");
    }
    else if(percentage>60)
    {
        printf("Your grade is B\n");
    }
    else if(percentage>40)
    {
        printf("Your grade is C\n");
    }
    else if(percentage>35)
    {
        printf("Your grade is D\n");
    }
    else
    {
        printf("Your grade is F\n");
    }
    return 0;
}
