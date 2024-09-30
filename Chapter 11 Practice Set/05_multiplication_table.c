// Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
// make it store 15 number (from 7 x 1 to 7 x 15).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Failed to allocate the memory! \n");
        free(ptr);
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    int m = 15;
    ptr = (int *)realloc(ptr, m * sizeof(int));
    if (ptr == NULL)
    {
        printf("Failed to reallocate the memory! \n");
        free(ptr);
        return 1;
    }

    for (int i = n; i < m; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free (ptr);
    return 0;
}