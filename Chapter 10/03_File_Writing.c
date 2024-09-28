#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen ("03_test.txt", "w"); // writes to a file!
    int num = 1269;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}