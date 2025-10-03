//2.Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include<stdio.h>
int global=20;
void function(){
    int local=25;
    printf("Inside function: \n");
    printf("Global Variable: %d\n",global);
    printf("Local variable: %d\n",local);
}
int main(){
    function();
    printf("Inside main:\n");
    printf("Global variable: %d\n",global);
}