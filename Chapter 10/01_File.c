// The random-access memory is volatile, and its content is lost once the program 
// terminates. In order to persist the data forever we use files. 
// A file is data stored in a storage device. 
// A C program can talk to the file by reading content from it and writing content to it.

#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("01_test.txt", "r");

    int num;

    fscanf(ptr, "%d", &num);
    printf("%d \n", num);

    fscanf(ptr, "%d", &num); // fscanf moves to the next value once the previous one is captured!
    printf("%d \n", num);
    fclose (ptr);
    
    return 0;
}