#include <stdio.h>

int main(){

/*
p=prncipal
r=rate of interest
t=time period for which money was lent
*/
    float p,r,t,si;

    printf ("Enter the Principal amount \n");
    scanf ("%f",&p);

    printf ("Enter the yearly Rate of Interest \n");
    scanf ("%f",&r);
    
    printf ("Enter the Time period (in years)\n");
    scanf ("%f",&t);

    si = (p*r*t)/100;
    printf ("The Interest for principal Rs. %.2f, Rate, %.2f %% p.a, and Time %.1f years is %.2f", p,r,t,si);

    return 0;
}