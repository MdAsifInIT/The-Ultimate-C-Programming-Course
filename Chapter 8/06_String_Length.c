// STRLEN()function is used to count the number of characters in the string excluding the null 
// (‘\0’) characters.

#include <stdio.h>
#include <string.h>

int main(){
    char *ptr = "Mahito";
    printf("%d", strlen(ptr));

    return 0;
}