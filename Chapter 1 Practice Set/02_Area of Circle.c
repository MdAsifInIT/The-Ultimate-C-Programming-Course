#include <stdio.h>

int main(){
    
    // Area of circle is pi r sq
    // pi = 3.14

    float r, pi;
    pi = 3.14;
    printf("Enter the Radius of the Circle \n");
    scanf("%f", &r);

    printf("\nArea of the circle with radius %.2f is %.2f sq.units", r, pi*r*r);

    return 0;
}