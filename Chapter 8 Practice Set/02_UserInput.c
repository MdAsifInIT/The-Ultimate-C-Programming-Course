// Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[7];
    char str2[7];

    printf("Enter 1st String \n");

    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]); // enter key is also marked as a new line char
        fflush(stdin);        // flushing the new line character.
    }
    str[6] = '\0';

    printf("Enter 2nd String \n");
    scanf("%s", str2);

    printf("Length of 1st String is %d and Second is %d\n", strlen(str), strlen(str2));
    if (strlen(str) == strlen(str2))
    {
        printf("WEW! they are the same!\n");
    }
    else
    {
        printf("Hmm, they aren't the same!\n");
    }

    return 0;
}