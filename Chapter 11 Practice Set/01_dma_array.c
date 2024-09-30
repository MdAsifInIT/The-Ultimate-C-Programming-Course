// Use the array in problem 1 to store 6 integers entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr = (int*) calloc(6, sizeof (int));

    if (ptr == NULL)
    {
        printf("Failed to allocate the memory! \n");
        free(ptr);
        return 1;
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", ptr[i]);
    }

    free(ptr);
    return 0;
}