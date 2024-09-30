// Write a program to create a dynamic array of 5 floats using malloc().
#include <stdio.h>
#include <stdlib.h>

int main(){
    float* ptr = (float*) malloc (5 * sizeof(float));
    ptr[0] = 0.987;
    ptr[1] = 1.776;
    ptr[2] = 89.87;
    ptr[3] = 69.776;
    ptr[4] = 94.66;

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f \n", ptr[i]);
    }
    
    free(ptr);
    return 0;
}