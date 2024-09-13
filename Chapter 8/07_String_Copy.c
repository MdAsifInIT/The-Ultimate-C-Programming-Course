// STRCPY() function is used to copy the content of second string into first string passed to it.
// target string should have enough capacity to store the source string.

#include <stdio.h>
#include <string.h>

int main(){
    char source[] = "Mahito";
    char target[30];

    strcpy (target, source);

    puts(source);
    puts(target);

    return 0;
}