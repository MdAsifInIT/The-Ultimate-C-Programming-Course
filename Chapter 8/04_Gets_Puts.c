// gets() is a function which can be used to receive a multi-word string.
// Likewise, puts can be used to output a string.

#include <stdio.h>

int main(){
    char str[30];
    gets(str); // Takes input and puts into the string array: str

    // printf("%s", str);
    puts(str); // Prints the string and a new line at the end of the string!
    printf("There should be a new line before it!\n");

    return 0;
}