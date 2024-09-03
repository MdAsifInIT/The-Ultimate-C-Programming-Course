// Write a function and pass the value by reference.


#include <stdio.h>

int multiplier (int*);

int multiplier (int* a){ // adding value by reference.
    *a = *a * 100;
    return 0;
}

int main(){
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);

    multiplier(&a);

    printf("Value of the variable 'a' is %d.\n", a);
    return 0;
}