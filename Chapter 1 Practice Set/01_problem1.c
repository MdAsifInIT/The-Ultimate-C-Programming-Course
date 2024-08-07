// Write a program to calculate the area of a rectangle.
#include <stdio.h>

int main (){

    printf("Length = ");

    float a, b, c;
    scanf ("%f", &a);

    printf ("\nBreadth = ");
    scanf ("%f", &b);

    c = a*b;
    printf ("\nThe area of the rectangle is %f sq. units", c);

    return 0;
}