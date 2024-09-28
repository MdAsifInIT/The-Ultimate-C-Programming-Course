// EOF represents the end of File!

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("07_test.txt", "r");
    char c;

    while (1)
    {
        c = fgetc(ptr);
        printf("%c", c);

        // when all the content of a file has been read break
        if (c == EOF)
        {
            break;
        }
    }

    return 0;
}