#include <stdio.h>

int main(){
    // Area of cylinder is pi r sq h
    // pi = 3.14
    // h = height of cylinder

    float r, pi, h;
    pi = 3.14;
    printf("Enter the Radius of the Cylinder Base \n");
    scanf("%f", &r);

    printf("Enter the Height of the Cylinder \n");
    scanf("%f", &h);

    printf("Area of the cylinder with radius %.2f and height %.2f is %.2f sq.units", r, h, pi*r*r*h);

    return 0;
}