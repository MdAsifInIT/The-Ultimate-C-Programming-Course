#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int* ptr;
    ptr = (int*) malloc (n * sizeof (int));
    // int arr[n]; // not allowed in c language.

    ptr[0] = 77;
    printf("%d", ptr[0]);

    free(ptr);
    return 0;
}