// Write a program to check whether a given character is present in a string or not.
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char mychar;

    printf("Enter a short string! \n");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to check for presence! \n");
    scanf("%c", &mychar);

    int contains = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == mychar)
        {
            contains = 1 ;
            break;
        }  
    }

    if (contains)
    {
        printf("The character is present!");
    }

    else
    {
        printf("The character is not present!");
    }
    
    return 0;
}