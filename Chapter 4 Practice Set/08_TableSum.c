// Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include <stdio.h>

int main(){
    int n = 8, count = 1, sum = 0;
    
    for ( n ; count <= 10 ; count++)
    {
        printf("%d x %d = %d\n", n, count, n*count);
        sum += (n*count);
    }
    printf("\nTotal Sum = %d\n", sum);
    
    return 0;
}