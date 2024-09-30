// Write a program to dynamically create an array of size 6 capable of storing 6 
// integers.

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
        printf("Enter integer %d: \n", i+1);
        scanf("%d", &ptr[i]);
    }

    printf("\n \n");
    printf("The entered integers are: \n");
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", ptr[i]);
    }

    free(ptr);
    return 0;
}