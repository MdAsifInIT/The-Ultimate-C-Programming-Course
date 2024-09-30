// We can use free() function to deallocate the memory. The memory allocated using 
// calloc/malloc is not deallocated automatically.
// Write a program to demonstrate the usage of free() with malloc().

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr = (int*) malloc (2 * sizeof(int));
    ptr[0] = 83;
    ptr[1] = 49;

    free(ptr); 
    //It will free the allocated memory and below script will print garbage value.
    
    printf("%d \n", ptr[1]);
    
    return 0;
}