// AND, OR, NOT Operators
// Function same as Logical Gates.

#include <stdio.h>

int main(){
    int a = 0, b = 0;

    printf("AND OPERATOR OUTPUT: %d\n", a&&b);
    printf("OR OPERATOR OUTPUT: %d\n", a||b);
    printf("NOT OPERATOR OUTPUT FOR A: %d\n\n\n", !a);

    if(a&&b){
        printf("And Operator: TRUE\n");
    }

    else {
        printf("And Operator: FALSE\n");
    }

    if(a||b){
        printf("OR Operator: TRUE\n");
    }

    else {
        printf("OR Operator: FALSE\n");
    }

    return 0;
}