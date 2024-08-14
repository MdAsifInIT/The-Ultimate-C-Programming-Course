#include <stdio.h>

int main(){
    // Area of circle is pi r sq
    // pi = 3.14

    float radius, pi;
    pi = 3.14;
    printf("Enter the Radius of the Circle \n");
    scanf("%f", &radius);

    printf("Area of the circle is %f sq.units", pi*radius*radius);

    return 0;
}