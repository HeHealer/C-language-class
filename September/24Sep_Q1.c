//WAP to count the total number of words in a string.

#include<stdio.h>
int main(){
    int i=0,count=1;
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            count++;
        }
    }
    printf("Total number of words: %d\n",count);
}