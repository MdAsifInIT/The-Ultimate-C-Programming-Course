#include <stdio.h>

int main(){
    float celcius, farenheit;
    
    printf ("Enter the temperature in celcius(degrees):\n");
    scanf ("%f", &celcius);

    printf("Temperature is %.2f degrees farenheit", (celcius*9/5)+32);

    return 0;
}