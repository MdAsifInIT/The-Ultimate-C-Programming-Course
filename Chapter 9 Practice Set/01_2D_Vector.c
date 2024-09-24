// Create a two-dimensional vector using structures in C.
#include <stdio.h>

typedef struct vector{
    int i;
    int j;
} vec;

int main(){
    vec a;
    a.i = 10;
    a.j = 8;
    printf("Vector = %di + %dj\n", a.i, a.j);
    return 0;
}