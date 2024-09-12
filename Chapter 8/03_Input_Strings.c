// We can use %s with scanf to take string input from the user:

#include <stdio.h>

int main(){
    char str[4];
    printf("Enter the string!\n");

    scanf("%s", str);

    printf("The Entered string is %s\n", str);
    return 0;
}