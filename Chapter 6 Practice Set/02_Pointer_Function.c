// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
// a function and print its address. Are these addresses same? Why?
// Answer: It will be the same because the function is just taking the addresses and printing them as is.

#include <stdio.h>

void address (int*);

void address (int* a){
    printf("Address of variable in function is %p.\n", a);
}

int main(){
    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    int* np = &n;
    printf("The address of the variable 'a' is %p.\n", np);
    address(&n);

    return 0;
}