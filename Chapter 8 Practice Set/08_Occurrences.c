// Write a program to count the occurrence of a given character in a string.
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char mychar;

    printf("Enter a short string! \n");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to check for occurrences! \n");
    scanf("%c", &mychar);

    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == mychar)
        {
            count++ ;
        }
        
    }
    printf("Occurrence = %d \n", count);
    
    
    return 0;
}