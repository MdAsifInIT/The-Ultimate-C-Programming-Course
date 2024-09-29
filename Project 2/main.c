#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    int player, computer = (rand() % 3) + 1;

    do
    {
        printf("\nEnter a number between 1 to 3: \n");
        printf("1 --> Snake\n2 --> Water\n3 --> Gun \n\n");
        scanf("%d", &player);
    }

    while (player < 1 || player > 3);

    if (computer == player)
    {
        printf("Draw!, The computer chose the same!");
    }

    else if (computer == 1 && player == 2)
    {
        printf("\nComputer: Snake\nYou: Water\n");
        printf("You Lost! The snake drank your water! \n");
    }

    else if (computer == 2 && player == 3)
    {
        printf("\nComputer: Water\nYou: Gun\n");
        printf("You Lost! The water damaged your gun! \n");
    }

    else if (computer == 3 && player == 1)
    {
        printf("\nComputer: Gun\nYou: Snake\n");
        printf("You Lost! The gun shot your snake! \n");
    }

    else if (player == 1 && computer == 2)
    {
        printf("\nComputer: Water\nYou: Snake\n");
        printf("You Won! Your snake drank the water! \n");
    }

    else if (player == 2 && computer == 3)
    {
        printf("\nComputer: Gun\nYou: Water\n");
        printf("You Won! Your water damaged the gun! \n");
    }

    else if (player == 3 && computer == 1)
    {
        printf("\nComputer: Snake\nYou: Gun\n");
        printf("You Won! Your gun shot the snake! \n");
    }

    return 0;
}