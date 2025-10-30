//WAP to copy the contents of one file into another file.

#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    char str[1000],ch;
    int i=0;
    fp1=fopen("D:/text1.txt","w");
    if(fp1==NULL)
    {
        printf("Error");
        return 1;
    }
    fprintf(fp1,"Hello World, This is C programming.\nI love Coding.");
    fclose(fp1);
    fp1=fopen("D:/text1.txt","r");
    if(fp1==NULL)
    {
        printf("Error");
        return 1;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        str[i++]=ch;
    }
    fclose(fp1);
    fp2=fopen("D:/text2.txt","w");
    if(fp2==NULL)
    {
        printf("Error");
        return 1;
    }
    fprintf(fp2,"%s",str);
    fclose(fp2);
}