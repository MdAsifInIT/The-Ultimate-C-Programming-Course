// Modify the program above to check whether the file exists or not before 
// opening the file.

#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("02_test.txt", "r");

    if (ptr == NULL)
    {
        printf("The file does not exist! \n");
        return 0;
    }

    int num;

    fscanf(ptr, "%d", &num);
    printf("%d \n", num);

    fscanf(ptr, "%d", &num); // fscanf moves to the next value once the previous one is captured!
    printf("%d \n", num);

    fclose (ptr); // Closes the file!
    
    return 0;
}