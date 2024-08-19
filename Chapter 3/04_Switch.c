// What you entered?
// The switch statement in C allows you to execute different blocks of code based on the value of a single expression, 
// typically used as an alternative to multiple if-else statements.

#include <stdio.h>

int main(){
    int a;
    printf("Enter a Number !> 5\n");
    scanf("%d", &a);

    switch(a){
        case 1: printf("You Entered 1\n");
        break;

        case 2: printf("You Entered 2\n");
        break;

        case 3: printf("You Entered 3\n");
        break;

        case 4: printf("You Entered 4\n");
        break;

        case 5: printf("You Entered 5\n");
        break;

        default: printf("Value is greater than 5\n");
    }


    return 0;
}