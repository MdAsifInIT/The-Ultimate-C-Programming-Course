#include <stdio.h>

int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u ", (void*)&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
