// Write a program with a structure representing a complex number.
#include <stdio.h>

typedef struct complex_no {
    int a;
    int b;
} complex;

void printstruct(complex num);
void printstruct(complex num){
    printf("complex number = %d + %di \n", num.a, num.b);  
}

int main(){
    complex z;
    z.a = 7;
    z.b = 8;

    printstruct(z);
    return 0;
}