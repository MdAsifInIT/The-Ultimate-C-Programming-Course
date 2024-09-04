// Write a program using a function which calculates the sum and average of two 
// numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int* sum (int, int);
int* sum (int a, int b){
    int s = a+b;
    printf("The sum is %d\n", s);
    int* address = & s;
    return address;

}

float* average (int, int);
float* average (int a, int b){
    float avg = (a + b)/ 2.0;
    printf("The avg is %f\n", avg);
    float* address2 = & avg;
    return address2 ;

}

int main(){
    int a;
    printf("Enter 1st Number:\n");
    scanf("%d", &a);

    int b;
    printf("Enter 2nd Number:\n");
    scanf("%d", &b);

    int* ad_sum = sum(a,b);
    float* ad_avg = average(a,b);

    printf("The address of sum is %p.\n", (void*)ad_sum);
    printf("The address of avg is %p.\n", (void*)ad_avg);
    
    return 0;
}