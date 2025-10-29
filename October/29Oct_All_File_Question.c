/*WAP to open a file if exists and check wheather it is empty or having a text if it has text display it.
Also Count the number of spaces and lines.
Count the number of words and characters.
Longest Word.*/


#include<stdio.h>
int main(){
    FILE *fptr;
    int ch;
    int space=0,line=0,character=0,word=0;
    fptr=fopen("D:/Pollution.txt","r");
    if(fptr==NULL)
    {
        printf("The File does not exist or cannot be opened.");
        return 1;
    }
    ch=fgetc(fptr);
    if(ch==EOF)
    {
        printf("The file is empty");
    }
    else
    {
        printf("The file has the following content.\n");
        rewind(fptr);
        while((ch=fgetc(fptr))!=EOF)
        {
            putchar(ch);
            character++;
            if(ch==' ')
            {
                space++;
                word++;
            }
            if(ch=='\n')
            {
                line++;
            }
        }
        printf("Number of lines are: %d\n",line);
        printf("Number of spaces are: %d\n",space);
        printf("Number of characters are: %d\n",character);
        printf("Number of words are: %d\n",word);
        printf("Longest word: \n");
    }
    fclose(fptr);
}