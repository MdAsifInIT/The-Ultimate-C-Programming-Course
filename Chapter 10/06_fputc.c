#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen ("06_test.txt", "w");
    fputc('B', ptr);
    fclose(ptr);
    return 0;
}