//3.Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include<stdio.h>
int main(){
    {
        int a=10;
        printf("Block 1: %d\n",a);
        {
            int b=9;
            printf("Block 1.1: %d\n",a);
            printf("Block 1.1: %d\n",b);
        }
    }
    {
        int c=8;
        printf("Block 2: %d\n",c);
    }
}