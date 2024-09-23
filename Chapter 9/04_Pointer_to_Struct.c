// Accessing a structure using pointer.
#include <stdio.h>

struct students
{
    int code;
    float marks;
};

int main()
{
    struct students e1;
    struct students *ptr;
    e1.code = 99;
    ptr = &e1;
    printf("%d \n", (*ptr).code);
    // Here we're getting e1 by dereferencing ptr and printing e1.code!
    printf("%d \n", ptr -> code); //Exactly same as (*ptr).code
    return 0;
}