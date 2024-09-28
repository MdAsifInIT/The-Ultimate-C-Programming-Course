#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen ("05_test.txt", "r");
    char c = fgetc(ptr);
    printf("%c \n", c);
    fclose(ptr);
    return 0;
}