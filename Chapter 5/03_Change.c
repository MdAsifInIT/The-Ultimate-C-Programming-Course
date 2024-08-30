/*
If the passed variable is changed inside the function, the function call doesn’t 
change the value in the calling function.
*/

#include <stdio.h>

int change(int a);

int change(int a) {
    a = 77; // Misnomer
    return 0;
}

int main(){
    int b=22;
    change(b); // The value of b remains 22 as a copy of be is passed to the function.
    // ‘change’ is a function which pretends to change ‘a’ to 77. Now if we call it from main like this
    printf("b is %d", b); // prints 22

    return 0;
}