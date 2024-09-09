// Write a program to create an array of 10 integers and store multiplication table of
//  number given by user in it.

#include <stdio.h>

int main()
{
    int table_5[10];
    int t;
    printf("Enter a Number \n");
    scanf("%d", &t);

    for (int i = 0; i < 10; i++)
    {
        table_5[i] = t * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", t, i + 1, table_5[i]);
    }

    return 0;
}