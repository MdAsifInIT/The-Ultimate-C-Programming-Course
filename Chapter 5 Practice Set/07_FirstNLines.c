// Write a program using function to print the following pattern (first n lines)
#include <stdio.h>

void star(int);
void star(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < ((2 * i) + 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    star(20);
    return 0;
}