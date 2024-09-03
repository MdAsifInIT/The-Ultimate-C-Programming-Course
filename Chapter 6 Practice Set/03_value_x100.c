// Write a program to change the value of a variable to ten times of its current 
// value

#include <stdio.h>

int multiplier (int*);

int multiplier (int* a){
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