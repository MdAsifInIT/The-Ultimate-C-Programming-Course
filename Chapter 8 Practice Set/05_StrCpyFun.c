// Write your own version of strcpy function from <string.h>
#include <stdio.h>

void mycopy(char[], char[]);
void mycopy(char target[], char source[]) {

    int i = 0;
    for (i = 0; source[i] != '\0'; i++) {
        target[i] = source[i];
    }
    
    target[i] = source[i];
}

int main()
{
    char target[50];
    char source[50] = "Anohana";
    mycopy(target, source);
    printf("%s \n", target);

    return 0;
}