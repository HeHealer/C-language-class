//WAP to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
int main(){
    int i=0,alphabets=0,digits=0,special=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            alphabets++;
            i++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digits++;
            i++;
        }
        else
        {
            special++;
            i++;
        }
    }
    printf("Total alphabets: %d\n",alphabets);
    printf("Total digits: %d\n",digits);
    printf("Total special characters: %d\n",special);
}