// Sometimes the dynamically allocated memory is insufficient or more than required. 
// realloc is used to allocate memory of new size using the previous pointer and size.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float* ptr = (float*) malloc (5 * sizeof(float));
    if (ptr == NULL)
    {
        printf("Failed to allocate the memory! \n");
        free(ptr);
        return 1;
    }

    ptr[0] = 02.98;
    ptr[1] = 01.77;
    ptr[2] = 89.87;
    ptr[3] = 69.77;
    ptr[4] = 94.66;

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f \n", ptr[i]);
    }

    ptr = realloc(ptr, 10*sizeof(float));

    if (ptr == NULL)
    {
        printf("Failed to reallocate the memory! \n");
        free(ptr);
        return 1;
    }
    
    ptr[5] = 16.58;
    ptr[6] = 16.57;
    ptr[7] = 86.57;
    ptr[8] = 66.57;
    ptr[9] = 96.56;

    for (int i = 5; i < 10; i++)
    {
        printf("%.2f \n", ptr[i]);
    }
    
    free(ptr);
    return 0;
}