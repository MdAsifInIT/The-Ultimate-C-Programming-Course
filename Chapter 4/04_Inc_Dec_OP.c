// i++ prints i first and then increments i (Post increment Operator)
// ++i increments i first and then prints i (Post increment Operator)

#include <stdio.h>

int main(){
    int i=10;
    printf("The value of i is %d\n", i); //10

    printf("The value of i is %d\n", ++i); //11

    printf("The value of i is %d\n", i++); //11

    printf("The value of i is %d\n", i); //12

    return 0;
}