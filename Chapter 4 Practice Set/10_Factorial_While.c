// Find factorial of a number given by user using while loop
#include <stdio.h>

int main(){
    int num, product = 1, count = 1;
    printf("Enter a Number:\n");
    scanf("%d", & num);

    while (count <= num)
    {
        product *= count;
        count++;
    }
   printf("The factorial of %d is %d\n", num, product); 
    
    return 0;
}