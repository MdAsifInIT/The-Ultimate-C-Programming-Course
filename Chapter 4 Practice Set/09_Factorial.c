// Write a program to calculate the factorial of a given number using a for loop.
// 8x7x6x5x4x3x2x1

#include <stdio.h>

int main(){
    int num, product = 1;
    printf("Enter a Number:\n");
    scanf("%d", & num);

    for (int count = 1; count <= num; count ++)
    {
        product *= count;
    }

    printf("The factorial of %d is %d\n", num, product);
    
    return 0;
}