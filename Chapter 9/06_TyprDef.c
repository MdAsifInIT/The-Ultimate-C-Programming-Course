// We can use the ‘typedef’ keyword to create an alias name for data types in C.
#include <stdio.h>

int main(){
    typedef int mda; // Now mda is a datatype!
    mda value = 9;
    printf("%d \n", value);
    return 0;
}