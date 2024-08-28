#include <stdio.h>
#include <math.h> // Include math.h for the sqrt function

int main()
{
    int num, not_prime = 0;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1)
    {
        printf("The number is not prime!\n");
    }
    // Special case for 2, which is prime
    else if (num == 2)
    {
        printf("The number is prime!\n");
    }
    else
    {
        // Loop from 2 to the square root of num
        for (int count = 2; count <= sqrt(num); count++)
        {
            if (num % count == 0)
            {
                not_prime = 1; // Set flag to 1 if a divisor is found
                break;         // Exit loop early if not prime
            }
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
