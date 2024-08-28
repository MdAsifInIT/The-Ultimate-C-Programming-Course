// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include <stdio.h>

int main(){
    int i = 0, sum =0;
    for (i; i <= 10 ; i++)
    {
        sum += i;
    }

    printf("Sum of first 10 natural numbers is %d!\n", sum);
     
    return 0;
}