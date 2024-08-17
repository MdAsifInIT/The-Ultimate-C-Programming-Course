#include <stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y - z+k, where x=2, y=3, z=3, k=1
    int x=2, y=3, z=3, k=1, answer;
    answer= 3*x/y - z+k;
    
    printf("Step 1 = %d/y - z+k\n", 3*x);
    printf("Step 2 = %d - z+k\n", 3*x/y);
    printf("Step 3 = %d + k\n", 3*x/y - z); 
    printf("The answer is %d \n", answer);

    return 0;
}