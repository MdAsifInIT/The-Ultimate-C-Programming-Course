// We can use %s and array address of string to print the entire string.

#include <stdio.h>

int main(){
    // char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"  ; // Same as char str[] = {'a', 'b', 'c', '\0'};

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%c", str[i]);
    // }
    printf("%s", str);
    
    return 0;
}