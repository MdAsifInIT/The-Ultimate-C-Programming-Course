// Write a program using function to find average of three numbers.
#include <stdio.h>

float avg(float, float, float);

int main()
{
    avg(9, 10, 2);
    return 0;
}

float avg(float x, float y, float z)
{
    printf("The average is %.2f!\n", (x + y + z) / 3);
}