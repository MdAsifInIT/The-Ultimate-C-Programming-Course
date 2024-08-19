// condition ? expression-if-true : expression-if-false 
// Here "?" and ":" are called Ternary Operators 

#include <stdio.h>

int main(){
    int a,b;

    printf("Enter the value of a: \n");
    scanf("%d", &a);

    printf("Enter the value of b: \n");
    scanf("%d", &b);

    a>b? printf("a is greater than b!\n"): printf("a is not greater than b");

    return 0;
}
 
 
