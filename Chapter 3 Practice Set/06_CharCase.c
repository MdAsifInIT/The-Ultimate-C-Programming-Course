// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include <stdio.h>

int main(){
    char c;
    int ascii;

    printf("Enter a single character\n:");
    scanf("%c", &c);

    ascii = (int)c;

    printf("\nThe character value is %d\n", ascii);

    if(ascii >= 97 && ascii <= 122)
    printf("The character entered is lower case.\n");
    else if(ascii >= 65 && ascii <= 90)
    printf("The character entered is upper case.\n");

    else
    printf("Cannot Determine!!\n");

    return 0;
}