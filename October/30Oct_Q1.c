//WAP to count how many times program is executed and display a message at the beginning of the program.

#include<stdio.h>
int main(){
    FILE *fptr;
    int count=0;
    fptr=fopen("D:/Pollution.txt","r");
    if(fptr!=NULL)
    {
        fscanf(fptr,"%d",&count);
        fclose(fptr);
    }
    count++;
    printf("This is the execution number: %d",count);
    fptr=fopen("D:/Pollution.txt","w");
    if(fptr!=NULL)
    {
        fprintf(fptr,"%d",count);
        fclose(fptr);
    }
    else
    {
        printf("Error");
    }
}