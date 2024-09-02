#include <stdio.h>

int main(){
    int a = 3;
    int * m = &a;
    int ** n = & m;
    int *** o = & n;

    printf("Value of a is %d. \n", ***o);
    return 0;
}