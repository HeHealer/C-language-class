//Check if a string is palindrome.

#include<stdio.h>
#include<string.h>
int main(){
    int i=0,f=0,len;
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-2])
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("It is a Palindrome\n");
    }
    else
    {
        printf("It is not a Palindrome\n");
    }
}