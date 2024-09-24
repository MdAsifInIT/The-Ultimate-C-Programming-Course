// Write a program to illustrate the use of arrow operator → in C. 
#include <stdio.h>
#include <string.h>

typedef struct anime {
    char name[10];
    int rating;
} anime;

int main(){
    anime a1;
    anime* ptr;
    ptr = &a1;
    strcpy((ptr -> name),"OPM");
    a1.rating = 9;

    printf("Name = %s \nRating = %d \n", ptr -> name, ptr -> rating);

    return 0;
}