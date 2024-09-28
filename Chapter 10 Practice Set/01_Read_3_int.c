// Write a program to read three integers from a file.

#include <stdio.h>

int main()
{
    FILE *ptr = fopen("01_test.txt", "r");
    int arr[3];

    if (ptr == NULL)
    {
        printf("The file is not available! \n");
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr, "%d", &arr[i]);
    }

    fclose(ptr);

    printf("%d %d %d", arr[0], arr[1], arr[2]);

    return 0;
}