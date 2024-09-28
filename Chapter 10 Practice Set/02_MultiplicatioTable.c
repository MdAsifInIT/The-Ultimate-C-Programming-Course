// Write a program to generate multiplication table of a given number in text 
// format. Make sure that the file is readable and well formatted.

#include <stdio.h>

int main(){
    FILE *ptr = fopen("02_test.txt", "w");
    int num;

    printf("Enter a Number \n");
    scanf("%d", &num);

    fprintf(ptr, "Below is the multiplication table of %d: \n\n", num);

    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d \n", num, i, (num*i));
    }
    
    fclose(ptr);
    
    return 0;
}