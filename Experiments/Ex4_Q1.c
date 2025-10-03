//1.Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include<stdio.h>
int global_variable=2;
int main(){
    printf("Initial global variable: %d\n",global_variable);
    global_variable+=5;
    printf("After adding 5: %d\n",global_variable);
    global_variable-=3;
    printf("After subtracting 3: %d\n",global_variable);
}