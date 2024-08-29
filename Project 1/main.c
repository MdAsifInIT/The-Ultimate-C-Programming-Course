#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    int input, guess, success = 0;

    for (guess = 0; success != 1 ; guess++)
    {
        printf("Enter your Guess: \n");
        scanf("%d", &input);

        if (input == random_number){
            success = 1;
        }
        else if (input < random_number){
            printf("\nHigher number please!\n");
        }
        else if (input > random_number){
            printf("\nLower number please!\n");
        }
    }
    if (success = 1)
    {
        printf("\nYou have guessed the correct number! \n");
        printf("It took you %d tries to guess the number. \n", guess);

    }
    

    return 0;
}
