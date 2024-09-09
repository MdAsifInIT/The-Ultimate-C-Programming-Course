// Write a program containing functions which counts the number of positive
//  integers in an array.
#include <stdio.h>
int positive_in_arr(int[], int);
int positive_in_arr(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count ++ ;
        }
    }
    return count;
}

int main()
{
    int arr[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int count = positive_in_arr(arr, size);
    printf("%d \n", count);

    return 0;
}