// True False Calculator
// If, Else If, Else
// If Else If Else Ladder

#include <stdio.h>

int main(){
    int a;
    
    printf("Input 1 or 0\n");
    scanf("%d", &a);

    if (a == 1){
        printf("Input = \"TRUE\" \n");
    }

    else if (a == 0){
        printf("Input = \"FALSE\" \n");
    }

    else if (a%2 == 0){
        printf("Input = \"NON BINARY: Divisible by 2\" \n");
    }

    else{
        printf("Input = \"NON BINARY: Not divisible by 2\" \n");
    }

    return 0;
}