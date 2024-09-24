// Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
// The vectors must be two–dimensional.
#include <stdio.h>

typedef struct vector {
    int i;
    int j;
} vec;

vec sumVector(vec a, vec b);

vec sumVector(vec a, vec b) {
    vec v3 = {(a.i + b.i), (a.j + b.j)};
    return v3;
}

int main(){
    vec a;
    a.i = 10;
    a.j = 8;

    vec b;
    b.i = 2;
    b.j = 9;

    vec c = sumVector(a,b);
    printf("Vector = %di + %dj \n", c.i, c.j);
    
    return 0;
}