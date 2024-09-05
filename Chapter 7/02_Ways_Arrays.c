#include <stdio.h>

int main(){
    int main[] = {2,4,3,56,223,23111,13};

    for (int i = 0; i < 7; i++)
    {
        printf("The value at index %d is %d.\n", i, main[i]);
    }
    
    return 0;
}