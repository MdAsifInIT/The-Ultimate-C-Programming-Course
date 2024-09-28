// Write a program to read a text file character by character and write its content
// twice in separate file.

#include <stdio.h>

int main()
{
    FILE *ptr = fopen("03_test1.txt", "r");
    FILE *ptr2 = fopen("03_test2.txt", "w");
    char c;

    if (ptr == NULL)
    {
        printf("The file is not available! \n");
        return 0;
    }

    while ((c = fgetc(ptr)) != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
    }

    fclose(ptr);
    fclose(ptr2);

    return 0;
}