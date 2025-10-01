//WAP to check whether the two strings are Anagramas or not.

#include<stdio.h>
#include<string.h>
int anagram(char str1[],char str2[])
{
    int count[1000]={0};
    if(strlen(str1)!=strlen(str2))
    {
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for(int i=0;i<1000;i++)
    {
        if(count[i]!=0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    char str1[100],str2[100];
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    if(anagram(str1,str2))
    {
        printf("The strings are anagrama.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }
}