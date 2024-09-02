#include <stdio.h>

void swap (int*, int*);

void swap (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 4, y = 6;
    swap (&x,&y);

    printf("x = %d & y = %d \n", x,y);
    return 0;
}