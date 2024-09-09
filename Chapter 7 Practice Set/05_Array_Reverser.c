// Write a program containing a function which reverses the array passed to it

#include <stdio.h>

void rev_arr(int[], int);
void rev_arr(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];              // putting value from index 0 to temp! (first value to temp value)!
        arr[i] = arr[size - 1 - i]; // putting value from index 5 to index 0! (last value to first value)!
        arr[size - 1 - i] = temp;   // putting value from temp to index 5! (temp value to last value)!
    }
}

void print_arr(int[], int);
void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    print_arr(arr, size);
    rev_arr(arr, size);
    print_arr(arr, size);

    return 0;
}