//WAP to read a sentence and replace lowercase characters with uppercase and vice-versa.

#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char str[100];
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=str[i]+32;
        }
        printf("%c",str[i]);
        i++;
    }
}