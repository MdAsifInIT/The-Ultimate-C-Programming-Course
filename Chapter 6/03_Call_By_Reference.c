#include <stdio.h>

int sum( int* ,int* );

// Call by reference can change the value of the variable.
int sum(int *a, int* b){
    *a = 10;
    return *a + *b;
}

int main(){
    int x = 1;
    int y = 1;

    printf("The sum of x and y is %d \n", sum(&x, &y));
    printf("The value of x is %d \n", x);
    // Here the value of x will be changed to 10.
    
    return 0;
}