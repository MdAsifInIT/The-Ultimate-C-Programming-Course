// Write a program to create an array of size n using calloc where n is an 
// integer entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of array: \n");
    
    scanf("%d", &n);
    int* ptr = (int*) calloc (n, sizeof(int));
    // It initializes each memory block with a default value of 0.

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    free(ptr);
    return 0;
}