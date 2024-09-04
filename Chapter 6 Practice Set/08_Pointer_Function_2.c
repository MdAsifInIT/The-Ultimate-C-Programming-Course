// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
// a function and print address of the variable stored in the function. Are these addresses same? Why?
// Answer: These addresses isn't same because the function takes a copy of the variable and
// stores it at a different memory location.

#include <stdio.h>

int address (int);

int address (int a){
    printf("Address of variable in function is %p.\n", &a);
    return 0;
}

int main(){
    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    int* np = &n;
    printf("The address of the variable 'a' is %p.\n", np);
    address(n);

    return 0;
}