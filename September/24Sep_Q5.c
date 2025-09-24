//Find the longest word in a sentence.

#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j=0,k=0,max=0,start=0,len;
    char str[100],word[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;i<=len;i++)
    {
        if(str[i]!=' '&&str[i]!='\n'&&str[i]!='\0')
        {
            j++;
        }
        else
        {
            if(j>max)
            {
                max=j;
                start=i-j;
                word[max]='\0';
                for(k=0;k<max;k++)
                {
                    word[k]=str[start+k];
                }
                word[k]='\0';
            }
            j=0;
        }
    }
    printf("The longest word is: %s\n",word);
}