#include <stdio.h>

int main(){
    char c = 'A';
    char* pointer_c = &c; // j is a pointer pointing to i (j is a character pointer) 

    float f = 3.14159265;
    float* pointer_f = &f;

    printf("The memory address of f is %p\n", pointer_f);
    printf("The memory address of c is %p\n", pointer_c);

    printf("The value of address of c is %c\n", *pointer_c);
    printf("The memory address of pointer of c is %p\n", &pointer_c);
    printf("The memory value at memory location %p is %d or %p \n", &pointer_c, *(&pointer_c), *(&pointer_c));
    printf("The value at memory location %p is %d \n", &pointer_c, **(&pointer_c));

    return 0;
}