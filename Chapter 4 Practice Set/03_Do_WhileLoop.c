// A do while loop is executed: 
// a. At least once.  : correct (a)
// b. At least twice. 
// c. At most once.

#include <stdio.h>

int main(){
    int i=1;
    do
    {
        printf("%d\n", i);
        i++;

    } while (i != i); // Always False
    
    return 0;
}