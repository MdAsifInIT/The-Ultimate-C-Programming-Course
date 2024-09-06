// An array can be of 2 dimension/ 3 dimension/ n dimensions
#include <stdio.h>

int main(){
    int arr[3][2] = {{1, 4},
                    {7, 9},
                    {11, 22}};

    // printf("%d", arr[2][1]);
    // We can access the elements of this array as arr[0][0] , arr[0][1] & so on ...
    // A 2d array like a 1d array is stored in contiguous memory blocks.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The address of array with index[%d][%d] is %u and the value is %d\n", i, j, &arr[i][j], arr[i][j]);
        }
        
    }
    
    return 0;
}