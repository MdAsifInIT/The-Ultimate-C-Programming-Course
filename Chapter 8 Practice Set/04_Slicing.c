// Write a function slice() to slice a string. It should change the original string such 
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
// for slice.

#include <stdio.h>

char* slice(char[], int, int);
char* slice(char str[], int m, int n){
    char* ptr1 = &str[m];
    str = ptr1;
    str[n] = '\0';
    return str;
}


int main(){
    char mystring[] = "Anohana";
    printf("%s", slice(mystring, 1, 4));

    return 0;
}