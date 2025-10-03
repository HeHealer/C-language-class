//4.Declare a static local variable inside a function. Observe how its value persists across function calls.

#include<stdio.h>
void function(){
    static int count=0;
    count++;
    printf("Count: %d\n",count);
}
int main(){
    function();
    function();
    function();
}