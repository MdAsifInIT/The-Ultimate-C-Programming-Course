// Print first n natural numbers using for loop (backwards).
#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n:");
    scanf("%d", &n);

    for (int i = n; i ; i--)
    {
        printf("\n%d\n", i);
    }
    
    return 0;
}