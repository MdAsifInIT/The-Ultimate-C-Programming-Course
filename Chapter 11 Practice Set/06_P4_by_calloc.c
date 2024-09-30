#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Failed to allocate the memory! \n");
        free(ptr);
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    ptr = realloc(ptr, 10 * sizeof (int));
    if (ptr == NULL)
    {
        printf("Failed to reallocate the memory! \n");
        free(ptr);
        return 1;
    }

    for (int i = 5; i < 10; i++)
    {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}