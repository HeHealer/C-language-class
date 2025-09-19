#include<stdio.h>
int main(){
    char string[50];
    int i;
    printf("Enter name: ");
    fgets(string,sizeof(string),stdin);
    for (i=0;string[i]!='\0';i++)
    {
        printf("%c",string[i]);
    }
}