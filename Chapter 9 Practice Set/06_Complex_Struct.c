// Create an array of 5 complex numbers created in Problem 5 and display them 
// with the help of a display function. The values must be taken as an input from 
// the user.
#include <stdio.h>

typedef struct complex_no {
    int a;
    int b;
} complex;

void printstruct(complex num);
void printstruct(complex num) {
    printf("complex number = %d + %di \n", num.a, num.b);  
}

int main(){
    complex arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n\n%d. Enter Real Part: \n", i+1);
        scanf("%d", &(arr[i].a));

        printf("%d. Enter Imaginary Part: \n", i+1);
        scanf("%d", &(arr[i].b));

        printstruct(arr[i]);
        
    }
    

    return 0;
}