#include <stdio.h>

int main(){
    int i = 37;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer)

    printf("Memory Location of i is %p\n", j);
    printf("Memory Location of j is %p\n", &j);

    printf("The value at Memory Location %p is %d\n", j, *j);
    printf("The value at Memory Location %p is %p\n", &j, *(&j));

    printf("The value at Memory Location %p is %d\n", &j, **(&j));


    return 0;
}