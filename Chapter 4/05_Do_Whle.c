// Print first n natural numbers using do while loop.

#include <stdio.h>

int main(){
    int m = 1, n;
    printf("Enter the value of n\n:");
    scanf("%d", &n);

    if (n<=0)
    {
        printf("Please enter a positive non-zero integer\n");
        return 0;
    }
    

    do
    {
        printf("\n%d\n", m);
        m++;
    } while (n >= m);

    return 0;
}