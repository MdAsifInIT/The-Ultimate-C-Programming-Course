// Create an array of size 3 x 10 containing multiplication tables of 3 numbers entered by the user.

#include <stdio.h>

int main(){
    int arr[3][10];
    int mul[3];
    int inputs = 1;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Number %d: \n", inputs);
        scanf("%d", &mul[i]);
        inputs ++;
        
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
    
    
    return 0;
}