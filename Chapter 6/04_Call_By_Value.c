#include <stdio.h>

int sum(int,int);

int sum(int a, int b){
    a = 10;
    return a + b;
}

int main(){
    int x = 1;
    int y = 1;

    printf("The sum of x and y is %d \n", sum(x,y));
    printf("The value of x is %d \n", x); 
    // Sum function cannot change x using a because copy of x is provided to sum in a

    return 0;
}