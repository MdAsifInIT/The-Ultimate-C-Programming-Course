// Illustrating that arrays occupy contiguous blocks of memory.

#include <stdio.h>

int main(){
    int main[] = {2,3,5,99};
    
    printf("The address of %d is %u\n", 0, &main[0]);
    printf("The address of %d is %u\n", 1, &main[1]);
    printf("The address of %d is %u\n", 2, &main[2]);
    printf("The address of %d is %u\n", 3, &main[3]);

    return 0;
}