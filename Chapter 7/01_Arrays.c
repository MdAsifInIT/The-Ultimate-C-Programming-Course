#include <stdio.h>

int main(){
    int main[5]; // Reserve space to store 5 integers (0-4)
    printf("Enter 5 values.\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &main[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d.\n",  i, main[i]);
    }
    // We can go all the way till marks[4] 
    return 0;
}