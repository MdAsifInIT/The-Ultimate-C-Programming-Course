//Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main(){
    int n, count =1;
    printf("Enter a Number:\n");
    scanf("%d", &n);
    for ( n ; count <= 10 ; count++)
    {
        printf("%d x %d = %d\n", n, count, n*count);
    }
    
    return 0;
}