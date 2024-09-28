#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen ("04_test.txt", "w");
    fprintf(ptr, "The Value will be printed below: \n");
    fclose(ptr);

    ptr = fopen ("04_test.txt", "a"); // appends the value at the end of the file!
    int num = 1269;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}