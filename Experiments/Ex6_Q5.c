//5.Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string. 

#include<stdio.h>
#include<string.h>
void REVERSE(char *str)
{
    int i,len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    REVERSE (str);
    printf("Reversed string: %s\n",str);
}