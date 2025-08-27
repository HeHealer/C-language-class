#include<stdio.h>
int main(){
    int num1,num2,i,sum=0,count=0;
    float avg=0;
    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
        if(i%2!=0)
        {
            count=count+1;
            if(count<=15)
            {
                sum=sum+i;
                avg=sum/count;
            }
        } 
    }
    printf("Sum is: %d\n",sum);
    printf("Average is: %f\n",avg);
}