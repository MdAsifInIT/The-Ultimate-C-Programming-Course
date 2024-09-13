// We can declare strings using pointers
// This tells the compiler to store the string in memory and assigned address is stored in a 
// char pointer.

#include <stdio.h>

int main(){
    char *ptr = "Mahito";
    puts(ptr);

    return 0;
}