// Print sun and average using the address of a variable in function.

// Original Ques:

// Write a program using a function which calculates the sum and average of two 
// numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int* sum (int, int);
int* sum (int a, int b){
    int c = a + b;
    int* d = &c;
    return d;
}

float* avg (int, int);
float* avg (int a, int b){
    float c = (a + b) / 2.0;
    float* d = &c;
    return d;
}

int main(){
    int a = 5, b = 4;
    int* s = sum(a,b);
    printf("Sum = %d \n", *s);

    float* av = avg(a,b);
    printf("Avg = %f \n", *av);

    return 0;
}