#include <stdio.h>

int main(){
    int i = 39;
    float j = 3.0;
    char k = 'A';

    int* i1 = &i;
    float* j1 = &j;
    char* k1 = &k;
    
    printf("The address of int is %u!\n", i1);
    printf("Subtracting 1 from int address gives %u! \n\n", i1 - 1);
    
    printf("The address of float is %u!\n", j1);
    printf("Subtracting 1 from float address gives %u! \n\n", j1 - 1);
    
    printf("The address of char is %u!\n", k1);
    printf("Subtracting 1 from k address gives %u! \n\n", k1 - 1);
    
    return 0;
}