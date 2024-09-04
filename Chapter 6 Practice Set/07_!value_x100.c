// Try problem 3 using call by value and verify that it does not change the value of 
// the said variable.

#include <stdio.h>

int multiplier (int);

int multiplier (int a){
    a = a * 100;
    return 0;
}

int main(){
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);

    multiplier(a);

    printf("Value of the variable 'a' is %d.\n", a);
    return 0;
}