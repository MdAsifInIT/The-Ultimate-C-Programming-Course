// Write a program to print the address of a variable. Use this address to get the 
// value of the variable.

#include <stdio.h>

int main(){
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);

    int* ap = &a;
    printf("The address of the variable 'a' is %p", ap);
    printf("The value in at address %p is %d", ap, *ap);
    
    return 0;
}