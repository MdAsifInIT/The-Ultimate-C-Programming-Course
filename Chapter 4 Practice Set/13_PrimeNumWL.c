// Write a program to check whether a given number is prime or not using while loop.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, not_prime = 0;
    int count = 2;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("The number is not prime!\n");
    }

    else if (num == 2)
    {
        printf("The number is prime!\n");
    }
    else
    {
        while (count <= sqrt(num))
        {
            if (num % count == 0)
            {
                not_prime = 1;
                break;
            }
            count++;
        }
        if (not_prime)
        {
            printf("The number is not prime!\n");
        }
        else
        {
            printf("The number is prime!\n");
        }
    }

    return 0;
}