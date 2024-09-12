// A string is a 1-D character array terminated by a null character (‘\0’) 
// A null character is used to denote the termination of a string. Characters are stored in 
// contiguous memory locations.

#include <stdio.h>

int main(){
    // char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"  ; // Same as char str[] = {'a', 'b', 'c', '\0'};

    for (int i = 0; i < 3; i++)
    {
        printf("%c", str[i]);
    }
    

    return 0;
}